#include <iostream>

#include "lib/book.h"
#include "lib/library.h"
#include "lib/utils.h"

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
    } else if (cmd == "list" or cmd == "ls") {
        cout << "Listing all books..." << endl;

        vector<Book> v = library::list();
        for (auto &&b : v) {
            cout << endl;
            cout << "Book #" << b.id() << endl;
            cout << "  Title:\t" << b.title << endl;
            cout << "  Author:\t" << b.author << endl;
            cout << "  Pub. Year:\t" << b.publishedYear << endl;
            // cout << "\tSubject: " << b.subject << endl;
        }
        
        return 0;
    } else if (cmd == "test") {
        cout << "Test not defined" << endl;
        return 0;
    }

    cerr << "bad invocation" << endl;
    return 127;
}
