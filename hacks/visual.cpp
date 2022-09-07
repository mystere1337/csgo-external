//
// Created by mystère on 8/20/22.
//

#include "visual.h"

#include "visual/sniper_crosshair.h"
#include "visual/watermark.h"
#include "visual/recoil_crosshair.h"

void hacks::visuals(const std::stop_token& token, csgo& csgo, input& input, config& config, overlay& overlay) {
    while (!token.stop_requested()) {
        hacks::visual::sniper_crosshair(csgo, input, config, overlay);
        hacks::visual::recoil_crosshair(csgo, input, config, overlay);
        hacks::visual::watermark(config, overlay);

        overlay.flush();

        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
}