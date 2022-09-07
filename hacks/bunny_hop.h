//
// Created by mystère on 8/10/22.
//

#pragma once

#include "../system/input.h"
#include "../csgo/csgo.h"
#include "../config/config.h"

namespace hacks {
    void bunny_hop(const std::stop_token& token, csgo &csgo, input &input, config& config);
}