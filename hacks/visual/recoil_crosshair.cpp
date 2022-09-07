//
// Created by mystère on 8/21/22.
//

#include <valarray>
#include "recoil_crosshair.h"

void hacks::visual::recoil_crosshair(csgo &csgo, input &input, config &config, overlay &overlay) {
    if (csgo.get_engine()->is_in_game() && config.get_setting<bool>("recoil_crosshair")) {
        auto local_player = csgo.get_client()->get_local_player();
        auto width = overlay.get_screen_width();
        auto height = overlay.get_screen_height();

        if (local_player->is_valid()) {
            vec3f_s aim_punch = local_player->get_aim_punch_angle();
            auto x = width/2 - (tanf((aim_punch.y / 2) * M_PI / 180) / tanf((90 / 2) * M_PI / 180)) * width;
            auto y = height/2 + (tanf((aim_punch.x / 2) * M_PI / 180) / tanf((90 / 2) * M_PI / 180)) * height;

            // Don't draw recoil crosshair if too close to real crosshair
            if (height/2 - (int)y < 2)
                return;

            overlay.set_foreground_color(0, 255, 0);
            overlay.draw_line_relative(x - 4, y, 9, 0);
            overlay.draw_line_relative(x, y - 4, 0, 9);
        }
    }
}