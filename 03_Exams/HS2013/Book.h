#ifndef INC_03_EXAMS_BOOK_H
#define INC_03_EXAMS_BOOK_H

#include <map>
#include <string>
#include <memory>
class Book {
public:
    Book();
    virtual ~Book();
    void addContent(unsigned int number, std::string text);
    std::string getChapter(unsigned int number);

private:
    std::shared_ptr<class BookImpl> bookImpl;
};

#endif //INC_03_EXAMS_BOOK_H
