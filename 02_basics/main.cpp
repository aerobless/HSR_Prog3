//main.cpp
#include <iostream>
#include "Hello/Hello.h"

int main() {
    Hello hello{};
    hello.sayHello(std::cout);
}


/*
    std::cout << "Type a sentences:" << charc(std::cin) << std::endl;
    //TODO: find way to clear inputstream..
    //std::cin.clear(); //<-- doesn't work
    std::cout << "Type a sentences:" << allcharc(std::cin) << std::endl;
    return 0;
}*/