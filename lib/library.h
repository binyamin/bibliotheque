#ifndef LIBRARY_H
    #define LIBRARY_H

    #include <vector>
    #include "book.h"
    #include "utils.h"

    namespace library {

        // List all books
        std::vector<Book> list();

        // List all book from a single subject
        std::vector<Book> some(Subject subject);
    } // namespace library
    
#endif