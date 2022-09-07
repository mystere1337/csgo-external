cmake_minimum_required(VERSION 3.22)
project(csgo_external)

set(CMAKE_CXX_STANDARD 23)

add_executable(csgo_external main.cpp system/process.cpp system/process.h system/module.cpp system/module.h csgo/csgo.cpp csgo/csgo.h system/input.cpp system/input.h config/config.cpp config/config.h csgo/offsets/signatures.h csgo/engine.cpp csgo/engine.h csgo/offsets/netvars.h csgo/player.cpp csgo/player.h csgo/types/vec3.h csgo/types/vec2.h csgo/types/matrix.h csgo/client.cpp csgo/client.h hacks/bunny_hop.cpp hacks/bunny_hop.h hacks/trigger_bot.cpp hacks/trigger_bot.h system/overlay.cpp system/overlay.h hacks/visual/sniper_crosshair.h hacks/visual/sniper_crossair.cpp hacks/visual.cpp hacks/visual.h hacks/visual/watermark.cpp hacks/visual/watermark.h hacks/visual/recoil_crosshair.cpp hacks/visual/recoil_crosshair.h)
target_link_libraries(csgo_external xcb)
