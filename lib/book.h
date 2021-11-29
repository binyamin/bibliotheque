#ifndef BOOK_H
    #define BOOK_H

    #include <string>

    #define XML_PATH "library.xml"

    enum Subject {
        None,
        Fiction,
        Fantasy,
        History,
        Biography,
        General
    };

    class Book {
        long _id;

        public:
            std::string title;
            std::string author;
            int publishedYear;
            Subject subject;

            Book();
            Book(long id);
            Book(
                std::string title,
                std::string author,
                int publishedYear,
                Subject subject
            );
            void save() const;
            long id() const;
    };
    
    
#endif