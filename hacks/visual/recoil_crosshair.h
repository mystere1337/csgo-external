//
// Created by mystère on 8/21/22.
//

#pragma once

#include "../../csgo/csgo.h"
#include "../../config/config.h"
#include "../../system/input.h"
#include "../../system/overlay.h"

namespace hacks::visual {
    void recoil_crosshair(csgo &csgo, input &input, config& config, overlay& overlay);
}