#include <pugixml.hpp>

#include "library.h"
#include "utils.h"
#include "book.h"

using namespace std;

vector<Book> get_as_vec() {
    vector<Book> v;

    pugi::xml_document doc;
    doc.load_file(XML_PATH);
    for (auto &&c : doc.children()) {
        Book b = Book(c.attribute("id").as_int());
        b.title = c.child("title").child_value();
        b.author = c.child("author").child_value();
        b.publishedYear = atoi(c.child("year").child_value());
        // b.subject = atoi(c.child("subject").child_value());
        v.insert(v.end(), b);
    }

    return v;
}
vector<Book> library::list() {
    return get_as_vec();
}

vector<Book> library::some(Subject subject) {
    return vector<Book> {};
}