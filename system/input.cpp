//
// Created by mystère on 8/4/22.
//

#include <fstream>
#include <regex>
#include <iostream>
#include <fcntl.h>
#include <csignal>
#include <linux/uinput.h>
#include <cstring>
#include "input.h"

input::input() {
    _virtual_controller_fd = create_virtual_controller();
    _devices = find_keyboards();

    open_devices();
    start_query_threads();
}

input::~input() {
    stop_query_threads();
    close_devices();
    destroy_virtual_controller();

    delete this;
}

std::string get_first_match(std::string source, std::string pattern) {
    std::smatch sm;
    std::regex r(pattern);
    std::string result;

    if (std::regex_search(source, sm, r)) {
        result = sm[0].str();
    }

    return result;
}

std::vector<device_s> input::scan_input_devices() {
    std::vector<device_s> devices;

    std::ifstream file{ "/proc/bus/input/devices" };
    std::string file_content((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));

    std::regex pattern("(?:^I: (?:Bus=(.*?)) (?:Vendor=(.*?)) (?:Product=(.*?)) (?:Version=(.*?))$\n)?(?:^N: (?:Name=(.*?))$\n)?(?:^P: (?:Phys=(.*?))$\n)?(?:S: (?:Sysfs=(.*?))$\n)?(?:^U: (?:Uniq=(.*?))$\n)?(?:^H: (?:Handlers=(.*?)) +$\n)?(?:^B: (?:PROP=(.*?))$\n)?(?:^B: (?:EV=(.*?))$\n)?(?:^B: (?:KEY=(.*?))$\n)?(?:^B: (?:REL=(.*?))$\n)?(?:^B: (?:ABS=(.*?))$\n)?(?:^B: (?:MSC=(.*?))$\n)?(?:^B: (?:LED=(.*?))$\n)?(?:^B: (?:SND=(.*?))$\n)?(?:^B: (?:FF=(.*?))$\n)?(?:^B: (?:SW=(.*?))$\n)?\n", std::regex::multiline);
    std::sregex_iterator iter(file_content.begin(), file_content.end(), pattern);
    std::sregex_iterator end;
    std::stringstream buffer;

    while(iter != end) {
        device_s device;
        input_device_s input_device;
        input_id_s device_id;

        buffer << std::hex << (*iter)[1].str();
        buffer >> device_id.bus_type;
        buffer << std::hex << (*iter)[2].str();
        buffer >> device_id.vendor;
        buffer << std::hex << (*iter)[3].str();
        buffer >> device_id.product;
        buffer << std::hex << (*iter)[4].str();
        buffer >> device_id.version;

        input_device.input_id = device_id;
        input_device.name = (*iter)[5].str();
        input_device.physical_path = (*iter)[6].str();
        input_device.sysfs_path = (*iter)[7].str();
        input_device.unique_identifier = (*iter)[8].str();
        input_device.handlers = (*iter)[9].str();
        input_device.prop = (*iter)[10].str();
        input_device.ev = (*iter)[11].str();
        input_device.key = (*iter)[12].str();
        input_device.rel = (*iter)[13].str();
        input_device.abs = (*iter)[14].str();
        input_device.msc = (*iter)[15].str();
        input_device.led = (*iter)[16].str();
        input_device.snd = (*iter)[17].str();
        input_device.ff = (*iter)[18].str();
        input_device.sw = (*iter)[19].str();

        device.device_object = input_device;
        device.event_path = "/dev/input/" + get_first_match(input_device.handlers, "(event[0-9]+)");

        devices.emplace_back(device);

        ++iter;
    }

    return devices;
}

std::vector<device_s> input::find_keyboards() {
    std::vector<device_s> keyboards;

    for (auto device : scan_input_devices()) {
        if (device.device_object.ev.compare("120013") == 0 && device.device_object.key.back() == 'e' && (device.device_object.name.contains("Keyboard") || device.device_object.name.contains("keyboard"))) { // Hardcoded way to find a keyboard
            keyboards.emplace_back(device);
        }
    }

    if (keyboards.size() == 0) {
        throw std::runtime_error("error: can't find any keyboard");
    }

    return keyboards;
}

void input::open_devices() {
    for (auto &keyboard : _devices) {
        keyboard.fd = open(keyboard.event_path.c_str(), O_RDONLY | O_NONBLOCK);

        if (keyboard.fd == -1) {
            std::cout << "error: failed to open device " << keyboard.device_object.name << std::endl;
        }
    }
}

void input::close_devices() {
    for (auto &keyboard : _devices) {
        if (close(keyboard.fd) == -1) {
            std::cout << "error: failed to close device " << keyboard.device_object.name << std::endl;
        }
    }
}

void input::query_keyboard_state(std::stop_token stop_token, device_s* keyboard) {
    int rd;
    struct input_event ev;

    while (!stop_token.stop_requested()) {
        rd = read(keyboard->fd, &ev, sizeof(ev));

        if (rd < 1 || ev.type != EV_KEY) {
            continue;
        }
        keyboard->keys[ev.code] = static_cast<key_state_e>(ev.value);
    }
}

key_state_e input::get_key_state(std::uint16_t key_code) {
    for (auto &keyboard : _devices) {
        if (keyboard.keys[key_code] == key_state_e::pressed) {
            return key_state_e::pressed;
        }
        else if (keyboard.keys[key_code] == key_state_e::repeated) {
            return key_state_e::repeated;
        }
    }

    return key_state_e::released;
}

void input::start_query_threads() {
    for (device_s &keyboard : _devices) {
        _query_threads.emplace_back([&](std::stop_token token){ query_keyboard_state(token, &keyboard); });
    }
}

void input::stop_query_threads() {
    for (auto &thread : _query_threads) {
        thread.request_stop();
    }
}

std::int32_t input::create_virtual_controller() {
    uinput_setup setup;

    int fd = open("/dev/uinput", O_WRONLY | O_NONBLOCK);

    ioctl(fd, UI_SET_EVBIT, EV_SYN);
    ioctl(fd, UI_SET_EVBIT, EV_KEY);
    ioctl(fd, UI_SET_EVBIT, EV_MSC);
    ioctl(fd, UI_SET_EVBIT, EV_LED);
    ioctl(fd, UI_SET_EVBIT, EV_REP);
    ioctl(fd, UI_SET_KEYBIT, KEY_SPACE);
    ioctl(fd, UI_SET_KEYBIT, BTN_LEFT);
    ioctl(fd, UI_SET_KEYBIT, BTN_RIGHT);

    ioctl(fd, UI_SET_EVBIT, EV_REL);
    ioctl(fd, UI_SET_RELBIT, REL_X);
    ioctl(fd, UI_SET_RELBIT, REL_Y);

    //      +---------+.,+---------------------+.,
    //     ||   F     | ||        SPACE        | |
    //     ||         | ||                     | |
    //     |;---------; |;---------------------; |
    //     +-----------"+-----------------------"+

    memset(&setup, 0, sizeof(uinput_setup));
    setup.id.bustype = BUS_USB;
    setup.id.vendor = 0x0000;
    setup.id.product = 0x0000;
    strcpy(setup.name, "Intel Test Controller");

    ioctl(fd, UI_DEV_SETUP, &setup);
    ioctl(fd, UI_DEV_CREATE);

    return fd;
}

void input::destroy_virtual_controller() {
    ioctl(_virtual_controller_fd, UI_DEV_DESTROY);
    close(_virtual_controller_fd);
}

void input::emit(std::int32_t fd, std::uint16_t type, std::uint16_t code, std::int32_t val)
{
    input_event ie;

    ie.type = type;
    ie.code = code;
    ie.value = val;

    write(fd, &ie, sizeof(ie));
}

void input::send_input(std::uint16_t key_code) {
    emit(_virtual_controller_fd, EV_KEY, key_code, 1);
    emit(_virtual_controller_fd, EV_SYN, SYN_REPORT, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(30));
    emit(_virtual_controller_fd, EV_KEY, key_code, 0);
    emit(_virtual_controller_fd, EV_SYN, SYN_REPORT, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
}


