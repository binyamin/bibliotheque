#ifndef BOOK_H
    #define BOOK_H

    #include <string>

    #define XML_PATH "library.xml"

    typedef time_t book_id;

    class Book {
        book_id _id;

        public:
            std::string title;
            std::string author;
            int publishedYear;
            std::string subject;

            Book();
            Book(book_id id);
            Book(
                std::string title,
                std::string author,
                int publishedYear,
                std::string subject
            );
            void save() const;
            book_id id() const;
    };
    
    
#endif