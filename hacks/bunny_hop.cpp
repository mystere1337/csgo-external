//
// Created by mystère on 8/10/22.
//

#include "bunny_hop.h"

void hacks::bunny_hop(const std::stop_token& token, csgo& csgo, input& input, config& config) {
    while (!token.stop_requested()) {
        if (csgo.get_engine()->is_in_game() && config.get_setting<bool>("bunny_hop")) {
            auto local_player = csgo.get_client()->get_local_player();

            if (local_player->is_on_ground() && local_player->is_valid() && input.get_key_state(KEY_SPACE)) {
                input.send_input(KEY_SPACE);
            }

            continue;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}