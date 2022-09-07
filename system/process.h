//
// Created by mystère on 7/22/22.
//

#pragma once

#include <string>
#include <utility>
#include <vector>
#include <cstring>
#include "module.h"

typedef struct signature_s {
    std::vector<std::byte> bytes;
    std::vector<std::byte> mask;
} signature_t;

enum scan_type_e {
    offset,
    address
};

class process {
    std::filesystem::path _path;
    pid_t _pid;
    std::vector<module> _modules;

    std::filesystem::path find_path(std::string name);
    std::filesystem::path find_path(pid_t pid);
    std::vector<module> scan_modules();

    std::vector<std::byte> read_memory(size_t address, size_t len);
    void write_memory(size_t address, std::vector<std::byte> buffer);

public:
    process(void);
    process(std::string name);
    process(pid_t pid);

    auto get_pid() const { return _pid; };
    auto get_modules() const { return _modules; };
    auto get_path() const { return _path; };
    auto get_exe_path() const { return std::filesystem::read_symlink(_path / "exe"); }
    std::vector<module> get_modules(std::string name) const;
    std::vector<module> get_modules(std::string name, perms_s perms) const;
    class module get_first_module(std::string name) const;

    std::string read_string(size_t address);
    template<typename T> T read(size_t address);
    void read_raw(uintptr_t address, void *buffer, size_t size);
    void write_string(size_t address, std::string str);
    template<typename T> void write(size_t address, T buffer);
//    uintptr_t find(module module, std::string str, int offset, scan_type_e type, int extra); todo
    uintptr_t get_call_address(uintptr_t address);

    bool is_running();

    friend std::ostream &operator<<(std::ostream &os, process const &process) {
        return os << "{ "
                  << "pid: " << process.get_pid()
                  << ", path: " << process.get_path()
                  << ", exe_path: " << process.get_exe_path()
                  << ", modules: " << process.get_modules().size() << " }";
    }
};

template<typename T>
T process::read(size_t address) {
    T result;
    auto bytes = read_memory(address, sizeof(T));

    if (bytes.size() == sizeof(T)) {
        std::memcpy(&result, bytes.data(), sizeof(T));
    }

    return result;
}

template<typename T>
void process::write(size_t address, T buffer) {
    std::vector<std::byte> bytes(sizeof(T));

    const std::byte *begin = reinterpret_cast<const std::byte *>(std::addressof(buffer));
    const std::byte *end = begin + sizeof(T);
    std::copy(begin, end, std::begin(bytes));

    write_memory(address, bytes);
}
