//
// Created by mystère on 8/15/22.
//

#include <iostream>
#include "overlay.h"

overlay::overlay() {
    _c = xcb_connect(NULL, NULL);
    _s = xcb_setup_roots_iterator(xcb_get_setup(_c)).data;
    _w = _s->root;

    _g = xcb_generate_id(_c);

    uint32_t mask = XCB_GC_FOREGROUND | XCB_GC_LINE_WIDTH | XCB_GC_SUBWINDOW_MODE;
    uint32_t values[] = { _s->black_pixel, 1, XCB_SUBWINDOW_MODE_INCLUDE_INFERIORS };

    xcb_create_gc (_c, _g, _w, mask, values);
}

overlay::~overlay() {
    xcb_free_gc(_c, _g);
}

void overlay::set_foreground_color(uint8_t red, uint8_t green, uint8_t blue) {
    uint32_t pixel = 0;

    pixel = (pixel & 0xFFFFFF00) |  blue;
    pixel = (pixel & 0xFFFF00FF) | ((uint32_t)green <<  8);
    pixel = (pixel & 0xFF00FFFF) | ((uint32_t)red << 16);

    xcb_change_gc(_c, _g, XCB_GC_FOREGROUND, &pixel);
}

void overlay::set_background_color(uint8_t red, uint8_t green, uint8_t blue) {
    uint32_t pixel = 0;

    pixel = (pixel & 0xFFFFFF00) |  blue;
    pixel = (pixel & 0xFFFF00FF) | ((uint32_t)green <<  8);
    pixel = (pixel & 0xFF00FFFF) | ((uint32_t)red << 16);

    xcb_change_gc(_c, _g, XCB_GC_BACKGROUND, &pixel);
}

void overlay::set_line_width(uint32_t width) {
    xcb_change_gc(_c, _g, XCB_GC_LINE_WIDTH, &width);
}

void overlay::flush() {
    xcb_flush(_c);
}

void overlay::draw_rectangle(int16_t x, int16_t y, uint16_t width, uint16_t height) {
    xcb_rectangle_t rectangle[] = {
        {x, y, width, height},
    };

    xcb_poly_rectangle(_c, _w, _g, 1, rectangle);
}

void overlay::draw_line(int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    xcb_point_t points[] = {
        {x1, y1},
        {x2, y2}
    };

    xcb_poly_line(_c, XCB_COORD_MODE_ORIGIN, _w, _g, 2, points);
}

void overlay::draw_line_relative(int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    xcb_point_t points[] = {
            {x1, y1},
            {x2, y2}
    };

    xcb_poly_line(_c, XCB_COORD_MODE_PREVIOUS, _w, _g, 2, points);
}

uint16_t overlay::get_screen_width() {
    return _s->width_in_pixels;
}

uint16_t overlay::get_screen_height() {
    return _s->height_in_pixels;
}

void overlay::draw_text(int16_t x, int16_t y, std::string text) {
    xcb_image_text_8(_c, text.length(), _w, _g, x, y, text.c_str());
}
