#include <iostream>
#include <cstring>

#include "book.h"

using namespace std;

namespace utils {
    string get_line_as_str() {
        char t[64];
        cin.getline(t, 64);
        return (string) t;
    }

    Subject get_subject(string temp_subject) {
        // TODO:
        // This next block might be easier to read, if I could convert a
        // `Subject` enum value to its respective key/name with one function
        if(strcasecmp(temp_subject.c_str(), "History") == 0) {
            return Subject::History;
        } else if (strcasecmp(temp_subject.c_str(), "FantasY") == 0) {
            return Subject::Fantasy;
        } else if (strcasecmp(temp_subject.c_str(), "ficTion") == 0) {
            return Subject::Fiction;
        } else if (strcasecmp(temp_subject.c_str(), "biography") == 0) {
            return Subject::Biography;
        } else if (strcasecmp(temp_subject.c_str(), "general") == 0) {
            return Subject::General;
        } else {
            // FEAT: Instead of aborting, loop until we get a valid response
            cerr << "Error: That's not an option! Try again." << endl;
            abort();
        }
    }
} // namespace utils
