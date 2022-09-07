//
// Created by mystère on 7/23/22.
//

#include "module.h"

module::module(std::string map) {
    std::regex pattern("^(.*?)-(.*?) (.*?) (.*?) (.*?):(.*?) (.*?) +(.*?)?$");
    std::smatch matches;

    if (std::regex_match(map, matches, pattern)) {
        for (size_t i = 0; i < matches.size(); ++i) {
            if (i == 0)
                continue;

            std::ssub_match sub_match = matches[i];
            std::stringstream ss;

            if (i == 1) {
                ss << std::hex << sub_match.str();
                ss >> _start_address;
            }

            if (i == 2) {
                ss << std::hex << sub_match.str();
                ss >> _end_address;
            }

            if (i == 3) {
                _perms = { sub_match.str().at(0) == 'r',
                           sub_match.str().at(1) == 'w',
                           sub_match.str().at(2) == 'x',
                           sub_match.str().at(3) == 'p',
                           sub_match.str().at(3) == 's' };
            }

            if (i == 4) {
                ss << std::hex << sub_match.str();
                ss >> _offset;
            }

            if (i == 5) {
                ss << std::hex << sub_match.str();
                ss >> _dev_major;
            }

            if (i == 6) {
                ss << std::hex << sub_match.str();
                ss >> _dev_minor;
            }

            if (i == 7) {
                ss << sub_match.str();
                ss >> _inode;
            }

            if (i == 8 && sub_match.str().compare("") != 0) {
                _path = std::filesystem::path(sub_match.str());
            }
        }
    }
}
