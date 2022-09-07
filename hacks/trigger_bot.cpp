//
// Created by mystère on 8/13/22.
//

#include "trigger_bot.h"

void hacks::trigger_bot(const std::stop_token& token, csgo &csgo, input &input, config &config) {
    while (!token.stop_requested()) {
        if (csgo.get_engine()->is_in_game() && config.get_setting<bool>("trigger_bot")) {
            if (input.get_key_state(KEY_LEFTALT)) {
                auto local_player = csgo.get_client()->get_local_player();
                auto player_index = local_player->get_crosshair_id();

                if (!player_index || player_index > csgo.get_engine()->get_max_clients())
                    continue;

                if (!local_player->is_valid())
                    continue;

                player target_player = player(csgo.get_process()->read<std::uintptr_t>(
                                                      csgo.get_client()->get_address() + signatures::dwEntityList + player_index * 0x20), csgo.get_process(),
                                              csgo.get_client()->get_address());

                if (local_player->get_team() == target_player.get_team())
                    continue;

                std::this_thread::sleep_for(std::chrono::milliseconds(5));
                input.send_input(BTN_LEFT);
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}