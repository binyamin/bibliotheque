#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#include "book.h"

using namespace std;

namespace utils {
    bool string_compare(string a, string b) {
        #ifdef _WIN32
            // windows code
            return _stricmp(a.c_str(), b.c_str()) == 0;
        #else
            // linux code (posix)
            return strcasecmp(a.c_str(), b.c_str()) == 0;
        #endif
    }
    
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
            return string_compare(s, temp_subject);
        });
    }
} // namespace utils
