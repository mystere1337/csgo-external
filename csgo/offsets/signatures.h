//
// Created by mystère on 8/6/22.
//

#pragma once

#include <cstdint>

namespace signatures {
    constexpr uintptr_t dwClientState = 0xe084a8;
    constexpr uintptr_t dwClientState_DeltaTick = 0x20c;
    constexpr uintptr_t dwClientState_Map = 0x324;
    constexpr uintptr_t dwClientState_MapDirectory = 0x220;
    constexpr uintptr_t dwClientState_MaxPlayer = 0x420;
    constexpr uintptr_t dwClientState_NextCommandTime = 0x1ac;
    constexpr uintptr_t dwClientState_IsHLTV = 0x8e58;
    constexpr uintptr_t dwClientState_PlayerInfo = 0x9430;
    constexpr uintptr_t dwClientState_State = 0x1a0;
    constexpr uintptr_t dwClientState_ViewAngles = 0x8ea0;
    constexpr uintptr_t dwEntityList = 0x211cb28;
    constexpr uintptr_t dwForceAlt1 = 0x2995b14;
    constexpr uintptr_t dwForceAlt2 = 0x2995b08;
    constexpr uintptr_t dwForceAttack = 0x2993134;
    constexpr uintptr_t dwForceAttack2 = 0x2993128;
    constexpr uintptr_t dwForceBackward = 0x29931a0;
    constexpr uintptr_t dwForceCrouch = 0x2995b2c;
    constexpr uintptr_t dwForceForward = 0x29931ac;
    constexpr uintptr_t dwForceJump = 0x2995b50;
    constexpr uintptr_t dwForceLeft = 0x2993194;
    constexpr uintptr_t dwForceReload = 0x2995b20;
    constexpr uintptr_t dwForceRight = 0x2993188;
    constexpr uintptr_t dwForceScoreboard = 0x2995afc;
    constexpr uintptr_t dwForceTurnLeft = 0x2995b8c;
    constexpr uintptr_t dwForceTurnRight = 0x2995b80;
    constexpr uintptr_t dwForceUse = 0x2995b5c;
    constexpr uintptr_t dwForceWalk = 0x29931e8;
    constexpr uintptr_t dwGameDir = 0x10022e0;
    constexpr uintptr_t dwGameRulesProxy = 0x2111898;
    constexpr uintptr_t dwGetAllClasses = 0x6aa4080;
    constexpr uintptr_t dwGlobalVars = 0x205ecf0;
    constexpr uintptr_t dwGlowObjectManager = 0x298a480;
    constexpr uintptr_t dwInput = 0x298b000;
    constexpr uintptr_t dwInCrossID = 0xcc;
    constexpr uintptr_t dwLocalPlayer = 0x20ec670;
    constexpr uintptr_t dwPlayerResource = 0x2103fb8;
    constexpr uintptr_t dwPostProcessing = 0x29c1b30;
}