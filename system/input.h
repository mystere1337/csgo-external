//
// Created by mystère on 8/4/22.
//

#pragma once

#include <string>
#include <filesystem>
#include <thread>
#include <linux/input.h>
#include <linux/input-event-codes.h>
#include <vector>

enum key_state_e {
    released,
    pressed,
    repeated
};

struct input_id_s {
    std::uint16_t bus_type;
    std::uint16_t vendor;
    std::uint16_t product;
    std::uint16_t version;
};

struct input_device_s {
    input_id_s input_id;
    std::string name;
    std::filesystem::path physical_path;
    std::filesystem::path sysfs_path;
    std::string unique_identifier;
    std::string handlers;
    std::string prop;
    std::string ev;
    std::string key;
    std::string rel;
    std::string abs;
    std::string msc;
    std::string led;
    std::string snd;
    std::string ff;
    std::string sw;
};

struct device_s {
    input_device_s device_object;
    std::filesystem::path event_path;
    std::int32_t fd;
    key_state_e keys[KEY_MAX];
};

class input {
    std::int32_t _virtual_controller_fd;
    std::vector<device_s> _devices;
    std::vector<std::jthread> _query_threads;

    void emit(std::int32_t fd, std::uint16_t type, std::uint16_t code, std::int32_t val);
    std::int32_t create_virtual_controller();
    void destroy_virtual_controller();

    std::vector<device_s> scan_input_devices();
    std::vector<device_s> find_keyboards();
    void open_devices();
    void close_devices();
    void start_query_threads();
    void stop_query_threads();

    void query_keyboard_state(std::stop_token stop_token, device_s* keyboard);
public:
    input();
    ~input();

    key_state_e get_key_state(std::uint16_t key_code);
    void send_input(std::uint16_t key_code);
};
