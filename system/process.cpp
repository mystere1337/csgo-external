//
// Created by mystère on 7/22/22.
//

#include <filesystem>
#include <fstream>
#include <ranges>
#include <regex>
#include <sys/uio.h>

#include "process.h"
#include "module.h"

process::process(std::string name) {
    _path = find_path(name);
    _pid = std::stoi(get_path().filename());
    _modules = scan_modules();
}

process::process(pid_t pid) {
    _path = find_path(pid);
    _pid = pid;
    _modules = scan_modules();
}

process::process() : process("unknown") {

}

bool process::is_running() {
    return exists(_path);
}

std::filesystem::path process::find_path(pid_t pid) {
    std::filesystem::path path;

    for (const auto &proc_entry : std::filesystem::directory_iterator("/proc/")) {
        if (!proc_entry.is_directory())
            continue;

        if (proc_entry.path().filename().compare(std::to_string(pid)) == 0) {
            return proc_entry.path();
        }
    }

    throw std::runtime_error("error: can't get handle to process with pid " + std::to_string(pid));
}

std::filesystem::path process::find_path(std::string name) {
    std::filesystem::path path;

    for (const auto &proc_entry : std::filesystem::directory_iterator("/proc/")) {
        if (!proc_entry.is_directory())
            continue;

        if (std::filesystem::exists(proc_entry.path() / "exe"))
            path = std::filesystem::read_symlink(proc_entry.path() / "exe");

        if (path.filename() == name) {
            return proc_entry.path();
        }
    }

    throw std::runtime_error("error: can't get handle to process " + name);
}

std::vector<module> process::scan_modules() {
    std::ifstream maps(_path / "maps");
    std::vector<module> modules;
    std::string map;

    while (std::getline(maps, map)) {
        auto mod = module(map);
        modules.emplace_back(mod);
    }

    return modules;
}

std::vector<module> process::get_modules(std::string name) const {
    std::vector<module> modules;

    for (auto elem : _modules) {
        if (elem.get_path().filename().compare(name) == 0)
            modules.emplace_back(elem);
    }

    if (!modules.empty())
        return modules;
    else
        throw std::runtime_error("error: can't find modules with name " + name);
}

std::vector<module> process::get_modules(std::string name, perms_s perms) const {
    std::vector<module> modules = this->get_modules(name);
    std::vector<module>::iterator it = modules.begin();

    while(it != modules.end()) {
        if (it->get_perms().r != perms.r
            || it->get_perms().w != perms.w
            || it->get_perms().x != perms.x
            || it->get_perms().s != perms.s
            || it->get_perms().p != perms.p) {
            it = modules.erase(it);
        } else {
            ++it;
        }
    }

    if (!modules.empty())
        return modules;
    else
        throw std::runtime_error("error: can't find modules with specified permissions");
}

void process::write_memory(size_t address, std::vector<std::byte> buffer) {
    ssize_t number_of_bytes_written;

    struct iovec local[1];
    struct iovec remote[1];
    local[0].iov_base = buffer.data(); // Starting _address of buffer
    local[0].iov_len = buffer.size(); // number of bytes to read from buffer
    remote[0].iov_base = (void *)address; // Address to write_string to in remote process
    remote[0].iov_len = buffer.size(); // Number of bytes to write_string into remote process

    number_of_bytes_written = process_vm_writev(_pid, local, 1, remote, 1, 0);
}

std::vector<std::byte> process::read_memory(size_t address, size_t len) {
    std::vector<std::byte> read;
    std::byte buffer[len];
    ssize_t number_of_bytes_read;

    struct iovec local[1];
    struct iovec remote[1];
    local[0].iov_base = buffer; // Starting _address of buffer
    local[0].iov_len = len; // number of bytes to read in buffer
    remote[0].iov_base = (void *) address; // starting _address to read from in remote process
    remote[0].iov_len = len; // Number of bytes to read from remote process

    number_of_bytes_read = process_vm_readv(_pid, local, 1, remote, 1, 0);

    if (number_of_bytes_read == len) {
        for (auto elem: buffer) {
            read.emplace_back(elem);
        }
    }

    return read;
}

void process::read_raw(uintptr_t address, void* buffer, size_t size) {
    memcpy(buffer, read_memory(address, size).data(), size);
}

std::string process::read_string(size_t address) {
    std::string result = "\0";
    std::byte current;

    for (int i = 0; (current = read<std::byte>(address + i)) != std::byte(0); i++)
        result.insert(i, 1, (char)current);

    return result;
}

void process::write_string(size_t address, std::string str) {
    std::vector<std::byte> vec(str.size() + 1);

    std::transform(str.begin(), str.end(), vec.begin(), [] (char c) { return std::byte(c); });
    write_memory(address, vec);
}

class module process::get_first_module(std::string name) const {
    return get_modules(name, { true, false, true, true, false }).front();
}
