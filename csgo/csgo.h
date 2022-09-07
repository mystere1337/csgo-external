//
// Created by mystère on 7/31/22.
//

#pragma once

#include "../system/process.h"
#include "engine.h"
#include "client.h"

class csgo {
    process* _process = new class process("csgo_linux64");
    engine* _engine = new class engine(_process->get_first_module("engine_client.so").get_start_address(), _process);
    client* _client = new class client(_process->get_first_module("client_client.so").get_start_address(), _process);

public:
    csgo();

    process* get_process() { return _process; }
    engine* get_engine() { return _engine; }
    client* get_client() { return _client; }
};
