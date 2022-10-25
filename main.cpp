#include <iostream>
#include <atomic>
#include <any>

#include "csgo/csgo.h"
#include "config/config.h"
#include "system/input.h"
#include "system/overlay.h"
#include "hacks/bunny_hop.h"
#include "hacks/trigger_bot.h"
#include "hacks/visual.h"

int main() {
    std::cout << "csgo-external" << std::endl;

    if (geteuid()) {
        std::cout << "the program needs to be started as root" << std::endl;
        return 0;
    }

    std::map<std::string, setting_type_e> settings = {
            {"bunny_hop", setting_type_e::bool_type},
            {"panic_key", setting_type_e::int_type},
            {"trigger_bot", setting_type_e::bool_type},
            {"sniper_crosshair", setting_type_e::bool_type},
            {"watermark", setting_type_e::bool_type},
            {"recoil_crosshair", setting_type_e::bool_type},
        };

    auto* input = new class input();
    auto* config = new class config("./csgo_external.cfg", settings);
    auto* csgo = new class csgo();
    auto* overlay = new class overlay();

    std::jthread bunny_hop(hacks::bunny_hop, std::ref(*csgo), std::ref(*input), std::ref(*config));
    std::jthread trigger_bot(hacks::trigger_bot, std::ref(*csgo), std::ref(*input), std::ref(*config));
    std::jthread visuals(hacks::visuals, std::ref(*csgo), std::ref(*input), std::ref(*config), std::ref(*overlay));

    while (csgo->get_process()->is_running() && !input->get_key_state(config->get_setting<int>("panic_key"))) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    bunny_hop.request_stop();
    trigger_bot.request_stop();
    visuals.request_stop();
    
    delete overlay;
    delete csgo;
    delete config;
    delete input;

    return 0;
}
