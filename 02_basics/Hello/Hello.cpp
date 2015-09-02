//Hello.cpp
#include <ostream>
#include "Hello.h"

void Hello::sayHello(std::ostream &out) const{
    out << "Hello World!\n";
}
