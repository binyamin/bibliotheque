#ifndef BOOK_H
    #define BOOK_H

    #include <string>

    #define XML_PATH "library.xml"

    class Book {
        long _id;

        public:
            std::string title;
            std::string author;
            int publishedYear;
            std::string subject;

            Book();
            Book(long id);
            Book(
                std::string title,
                std::string author,
                int publishedYear,
                std::string subject
            );
            void save() const;
            long id() const;
    };
    
    
#endif