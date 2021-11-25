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
        protected: long id;

        public:
            std::string title;
            std::string author;
            int publishedYear;
            Subject subject;

            Book();
            Book(
                std::string title,
                std::string author,
                int publishedYear,
                Subject subject
            );
            void save() const;
            Book load();
    };
#endif