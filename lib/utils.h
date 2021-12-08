#ifndef UTILS_H
    #define UTILS_H

    #include "book.h"

    namespace utils {
        std::string get_line_as_str();
        bool validate_subject(std::string temp_subject);
        
        // compare two strings, caseless, cross platform
        bool string_compare(std::string a, std::string b);
    }
    
#endif