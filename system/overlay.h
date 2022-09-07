//
// Created by mystère on 8/15/22.
//

#pragma once

#include <assert.h>
#include <stdio.h>
#include <xcb/xcb.h>
#include <thread>

class overlay {
    xcb_connection_t* _c;
    xcb_screen_t* _s;
    xcb_drawable_t _w;
    xcb_gcontext_t _g;

public:
    overlay();
    ~overlay();

    uint16_t get_screen_width();
    uint16_t get_screen_height();

    void set_foreground_color(uint8_t red, uint8_t green, uint8_t blue);
    void set_background_color(uint8_t red, uint8_t green, uint8_t blue);
    void set_line_width(uint32_t width);
    void flush();

    void draw_rectangle(int16_t x, int16_t y, uint16_t width, uint16_t height);
    void draw_line(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
    void draw_line_relative(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
    void draw_text(int16_t x, int16_t y, std::string text);
};