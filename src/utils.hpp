#ifndef HEADER_UTILS_HPP
    #define HEADER_UTILS_HPP

    #include <iostream>
    #include <cstring>
    #include "book.h"

    namespace utils {
        std::string get_line_as_str() {
            char t[64];
            std::cin.getline(t, 64);
            return (std::string) t;
        }

        Subject get_subject(std::string temp_subject) {
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
            } else if (strcasecmp(temp_subject.c_str(), "General") == 0) {
                return Subject::General;
            } else {
                // FEAT: Instead of aborting, loop until we get a valid response
                std::cerr << "Error: That's not an option! Try again." << std::endl;
                std::abort();
            }
        }
    } // namespace utils

    namespace test_utils {
        const Book book_fixture (
            "J. R. R. Tolkien",
            "The Fellowship of the Ring",
            1967,
            Subject::Fantasy
        );
    } // namespace test_utils
#endif