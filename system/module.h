//
// Created by mystère on 7/23/22.
//

#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <iostream>
#include <regex>

struct perms_s {
    bool r = false;
    bool w = false;
    bool x = false;
    bool s = false;
    bool p = false;

    friend std::ostream &operator<<(std::ostream &os, perms_s const &perms) {
        return os << "{ "
                  << "r: " << perms.r
                  << ", w: " << perms.w
                  << ", x: " << perms.x
                  << ", p: " << perms.p
                  << ", s: " << perms.s << " }";
    }
};

class module {
    uintptr_t _start_address;
    uintptr_t _end_address;
    perms_s _perms;
    size_t _offset;
    size_t _dev_major;
    size_t _dev_minor;
    int64_t _inode;
    std::filesystem::path _path;

public:
    module(std::string map);

    auto get_start_address() const { return _start_address; }
    auto get_end_address() const { return _end_address; }
    auto get_perms() const { return _perms; }
    auto get_offset() const { return _offset; }
    auto get_dev_major() const { return _dev_major; }
    auto get_dev_minor() const { return _dev_minor; }
    auto get_path() const { return _path; }

    auto size() const { return _end_address - _start_address; }

    friend std::ostream &operator<<(std::ostream &os, module const &module) {
        return os << "{ "
                  << "start_address: " << module.get_start_address()
                  << ", end_address: " << module.get_end_address()
                  << ", perms: " << module.get_perms()
                  << ", offsets: " << module.get_offset()
                  << ", dev_major: " << module.get_dev_major()
                  << ", dev_minor: " << module.get_dev_minor()
                  << ", path: " << module.get_path() << " }";
    }
};
