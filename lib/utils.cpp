#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#include "book.h"

using namespace std;

namespace utils {
    string get_line_as_str() {
        char t[64];
        cin.getline(t, 64);
        return (string) t;
    }

    bool validate_subject(string temp_subject) {
        vector<string> subjects {
            "history",
            "fantasy",
            "general",
            "fiction",
            "biography",
            "science"
        };

        return std::any_of(subjects.begin(), subjects.end(), [&temp_subject](string s) {
            return strcasecmp(s.c_str(), temp_subject.c_str()) == 0;
        });
    }
} // namespace utils
