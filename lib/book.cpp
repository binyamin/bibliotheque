#include <pugixml.hpp>
#include "book.h"

using namespace std;

Book::Book() {
    this->_id = time(nullptr);
}

Book::Book(long id) {
    this->_id = id;
}

long Book::id() const {
    return this->_id;
}

Book::Book(
    std::string title,
    std::string author,
    int publishedYear,
    Subject subject
) {
    this->_id = time(nullptr);
    
    this->title = title;
    this->author = author;
    this->publishedYear = publishedYear;
    this->subject = subject;
}

void Book::save() const {
    pugi::xml_document doc;
    doc.load_file(XML_PATH);

    pugi::xml_node bookNode = doc.append_child("book");

    bookNode.append_attribute("id").set_value(this->_id);
    bookNode.append_child("title")
        .append_child(pugi::node_pcdata)
        .set_value(this->title.c_str());
    bookNode.append_child("author")
        .append_child(pugi::node_pcdata)
        .set_value(this->author.c_str());
    bookNode.append_child("year")
        .append_child(pugi::node_pcdata)
        .set_value(to_string(this->publishedYear).c_str());
    bookNode.append_child("subject")
        .append_child(pugi::node_pcdata)
        .set_value(to_string(this->subject).c_str());
        
    doc.save_file(XML_PATH);
}