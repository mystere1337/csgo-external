//
// Created by mystère on 8/16/22.
//

#include "sniper_crosshair.h"

void hacks::visual::sniper_crosshair(csgo &csgo, input &input, config &config, overlay &overlay) {
    if (csgo.get_engine()->is_in_game() && config.get_setting<bool>("sniper_crosshair")) {
        auto local_player = csgo.get_client()->get_local_player();
        auto width = overlay.get_screen_width();
        auto height = overlay.get_screen_height();

        if (local_player->is_valid()) {
            overlay.set_foreground_color(0, 255, 0);
            overlay.draw_line_relative(width/2 - 4, height/2, 9, 0);
            overlay.draw_line_relative(width/2, height/2 - 4, 0, 9);
        }
    }
}