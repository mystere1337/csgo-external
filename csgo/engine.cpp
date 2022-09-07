//
// Created by mystère on 8/6/22.
//

#include "engine.h"
#include "offsets/signatures.h"

engine::engine(uintptr_t address, process *process) {
    _address = address;
    _process = process;

    _client_state = get_client_state();
}

bool engine::is_in_game() {
    return (_process->read<std::uint32_t>(_client_state + signatures::dwClientState_State) == sign_on_state_e::full);
}

bool engine::is_connected() {
    return (_process->read<std::uint32_t>(_client_state + signatures::dwClientState_State) == sign_on_state_e::connected);
}

std::string engine::get_map_name() {
    return std::string(_process->read_string(_client_state + signatures::dwClientState_Map));
}

std::uint32_t engine::get_client_state() {
    return _process->read<std::uint32_t>(_address + signatures::dwClientState) + 0x8;
}

std::int32_t engine::get_max_clients() {
    return _process->read<std::int32_t>(_client_state + signatures::dwClientState_MaxPlayer);
}
