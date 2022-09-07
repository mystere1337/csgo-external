//
// Created by mystère on 8/13/22.
//

#pragma once

#include <stop_token>
#include "../csgo/csgo.h"
#include "../config/config.h"
#include "../system/input.h"

namespace hacks {
    void trigger_bot(const std::stop_token& token, csgo &csgo, input &input, config& config);
}