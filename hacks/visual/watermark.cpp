//
// Created by mystère on 8/20/22.
//

#include "watermark.h"

void hacks::visual::watermark(config &config, overlay &overlay) {
    if (config.get_setting<bool>("watermark")) {
        overlay.set_foreground_color(0, 255, 0);
        overlay.draw_text(20, 20, "csgo-external");
    }
}