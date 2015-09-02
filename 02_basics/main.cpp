//main.cpp
#include "Hello/Hello.h"
#include "Variables/VariableSandbox.h"
#include <iostream>

int main() {
    Hello hello{};
    hello.sayHello(std::cout);

    VariableSandbox vs{};
    vs.launch(std::cout);

    std::cout << inputAge(std::cin);

}


/*
    std::cout << "Type a sentences:" << charc(std::cin) << std::endl;
    //TODO: find way to clear inputstream..
    //std::cin.clear(); //<-- doesn't work
    std::cout << "Type a sentences:" << allcharc(std::cin) << std::endl;
    return 0;
}*/