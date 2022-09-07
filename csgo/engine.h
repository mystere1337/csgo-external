//
// Created by mystère on 8/6/22.
//

#pragma once

#include "../system/module.h"
#include "../system/process.h"
#include "offsets/signatures.h"
#include "player.h"

enum sign_on_state_e
{
    none,
    challenge,
    connected,
    create,
    pre_spawn,
    spawn,
    full,
    change_level
};

class engine {
    uintptr_t _address;
    process* _process;

    std::uint32_t _client_state;

public:
    engine(uintptr_t address, process* process);

    bool is_in_game();
    bool is_connected();
    std::string get_map_name();
    std::int32_t get_max_clients();
    std::uint32_t get_client_state();
    uintptr_t get_address() { return _address; }
};
