#ifndef INC_03_EXAMS_BOOKIMPLE_H
#define INC_03_EXAMS_BOOKIMPLE_H

#include "Book.h"
//PIMPL-Klasse
//diese versteckt die Implementierung vor der eigentlichen Klasse
//auf der der Programmierer zugriff hat.
class BookImpl{
public:
    BookImpl() { }

    void addContent(unsigned int number, std::string text){
        auto f = cont.find(number);
        if(f != cont.end()){ cont[number] += text;
        } else {cont.insert(std::pair<unsigned int, std::string>(number, text)); }
    }

    std::string getChapter (unsigned int number){
        auto f = cont.find(number);
        if(f != cont.end()){ return cont[number];
        } else { return "invalid chapter number"; }
    }

private:
    std::map<unsigned int, std::string> cont;
};

Book::Book() : bookImpl{std::make_shared<BookImpl>()}{ }

void Book::addContent(unsigned int number, std::string text){
    bookImpl->addContent(number, text);
}

std::string Book::getChapter(unsigned int number){
    return bookImpl->getChapter(number);
}

Book::~Book() { }

#endif //INC_03_EXAMS_BOOKIMPLE_H
