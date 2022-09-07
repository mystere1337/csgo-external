//
// Created by mystère on 8/6/22.
//

#include "client.h"
#include "offsets/signatures.h"

client::client(uintptr_t address, process *process) {
    _address = address;
    _process = process;
}

player* client::get_local_player() {
    return new class player(_process->read<std::uintptr_t>(_address + signatures::dwLocalPlayer), _process, _address);
}