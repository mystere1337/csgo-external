//
// Created by mystère on 8/6/22.
//

#include "player.h"
#include "offsets/netvars.h"
#include "offsets/signatures.h"


player::player(uintptr_t address, process *process, uintptr_t client_address) {
    _address = address;
    _process = process;
    _client = client_address;
}

std::int32_t player::get_team() {
    return _process->read<std::int32_t>(_address + netvars::CBaseEntity::m_iTeamNum);
}

std::int32_t player::get_health() {
    return _process->read<std::int32_t>(_address + netvars::CBasePlayer::m_iHealth);
}

std::int32_t player::get_life_state() {
    return _process->read<std::int32_t>(_address + netvars::CBasePlayer::m_lifeState);
}

std::int32_t player::get_tick_count() {
    return _process->read<std::int32_t>(_address + netvars::CBasePlayer::LocalPlayerExclusive::m_nTickBase);
}

std::int32_t player::get_shots_fired() {
    return _process->read<std::int32_t>(_address + netvars::CCSPlayer::CSLocalPlayerExclusive::m_iShotsFired);
}

bool player::is_scoped() {
    return _process->read<std::int32_t>(_address + netvars::CCSPlayer::m_bIsScoped);
}

vec3f_t player::get_origin() {
    return _process->read<vec3f_t>(_address + netvars::CCSPlayer::CSLocalPlayerExclusive::m_vecOrigin);
}

vec3f_t player::get_vec_view() {
    return _process->read<vec3f_t>(_address + netvars::CBasePlayer::LocalPlayerExclusive::m_vecViewOffset_0);
}

vec3f_t player::get_eye_pos() {
    vec3f_t v, o, r;

    v = this->get_vec_view();
    o = this->get_origin();
    return {v.x += o.x, v.y += o.y, v.z += o.z};
}

vec3f_t player::get_vec_velocity() {
    return _process->read<vec3f_t>(_address + netvars::CBasePlayer::LocalPlayerExclusive::m_vecVelocity_0);
}

vec3f_t player::get_view_punch_angle() {
    return _process->read<vec3f_t>(_address + netvars::CBasePlayer::LocalPlayerExclusive::Local::m_viewPunchAngle);
}

vec3f_t player::get_aim_punch_angle() {
    return _process->read<vec3f_t>(_address + netvars::CBasePlayer::LocalPlayerExclusive::m_Local + netvars::CBasePlayer::LocalPlayerExclusive::Local::m_aimPunchAngle);
}

std::int32_t player::get_fov() {
    return _process->read<std::int32_t>(_address + netvars::CBasePlayer::m_iFOV);
}

void player::get_bone_matrix(int index, matrix3x4_t *out) {
    _process->read_raw(_process->read<uintptr_t>(_address + 0x2c54 + 0x2C /* hopefully bone matrix? */) + 0x30 * index, out, sizeof(matrix3x4_t));
}

bool player::is_valid() {
    std::int32_t health = get_health();

    return _address && get_life_state() == 0 && health > 0 && health < 1337;
}

bool player::is_on_ground() {
    std::uint32_t flags = get_flags();
    return flags & FL_ONGROUND;
}

std::uint32_t player::get_flags() {
    return _process->read<std::uint32_t>(_address + netvars::CBasePlayer::m_fFlags);
}

std::int32_t player::get_crosshair_id() {
    return _process->read<std::int32_t>(_address + 0x12188);
}

