//Hello.h
#ifndef INC_02_BASICS_HELLO_H
#define INC_02_BASICS_HELLO_H
#include <iosfwd>

struct Hello {
    void sayHello(std::ostream &out) const;
};

#endif //INC_02_BASICS_HELLO_H
