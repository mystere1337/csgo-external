//
// Created by mystère on 8/6/22.
//

#pragma once

#include <cstdint>
#include "../system/process.h"
#include "types/vec3.h"
#include "types/matrix.h"

#define	FL_ONGROUND	(1<<0)

class player {
    uintptr_t _address;
    process* _process;
    uintptr_t _client;

public:
    player(uintptr_t address, process* process, uintptr_t client_address);

    std::int32_t get_team();
    std::int32_t get_health();
    std::int32_t get_life_state();
    std::int32_t get_tick_count();
    std::int32_t get_shots_fired();
    bool is_scoped();
    vec3f_t get_origin();
    vec3f_t get_vec_view();
    vec3f_t get_eye_pos();
    vec3f_t get_vec_velocity();
    vec3f_t get_view_punch_angle();
    vec3f_t get_aim_punch_angle();
    std::int32_t get_fov();
    void get_bone_matrix(int index, matrix3x4_t *out);
    bool is_valid();
    bool is_on_ground();
    std::uint32_t get_flags();
    std::int32_t get_crosshair_id();
};
