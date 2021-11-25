#include <iostream>

#include "src/book.h"
#include "src/utils.hpp"

/*
    Final Project
    ======
*/

#define PROJECT_NAME "Bibliotheque"

    
using namespace std;

int main(int _argc, char const *argv[]) {

    string cmd = argv[1];

    if(cmd == "add") {
        Book b = Book {};
        cout << "To add a book, please answer the following prompts." << endl;
        
        cout << "Title: ";
        getline(cin, b.title);

        cout << "Author: ";
        b.author = utils::get_line_as_str();

        cout << "Year of Publication: ";
        cin >> b.publishedYear;

        cout << "Subject: ";
        string t;
        cin >> t;
        b.subject = utils::get_subject(t);
        
        b.save();

        cout << "Great, you've added that book" << endl;
        
        return 0;
    } else if (cmd == "test") {
        cout << "Test not defined" << endl;
        return 0;
    }

    cerr << "bad invocation" << endl;
    return 127;
}
