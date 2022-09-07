//
// Created by mystère on 8/16/22.
//

#pragma once

#include <stop_token>
#include "../../csgo/csgo.h"
#include "../../config/config.h"
#include "../../system/input.h"
#include "../../system/overlay.h"

namespace hacks::visual {
    void sniper_crosshair(csgo &csgo, input &input, config& config, overlay& overlay);
}