//
// Created by mystère on 8/6/22.
//

#pragma once

#include "../system/process.h"
#include "player.h"

class client {
    uintptr_t _address;
    process* _process;

public:
    client(uintptr_t address, process* process);

    player* get_local_player();
    uintptr_t get_address() { return _address; }
};
