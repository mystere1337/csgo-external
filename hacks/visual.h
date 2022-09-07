//
// Created by mystère on 8/20/22.
//

#pragma once

#include "../csgo/csgo.h"
#include "../config/config.h"
#include "../system/input.h"
#include "../system/overlay.h"

namespace hacks {
    void visuals(const std::stop_token& token, csgo& csgo, input& input, config& config, overlay& overlay);
}