//main.cpp
#include "Hello/Hello.h"
#include "Variables/VariableSandbox.h"
#include "Sequences/SequencePlayground.h"
#include "Functions/FunctionSandbox.h"
#include "Classes/ClassSandbox.h"
#include "Classes/Date.h"
#include "Containers/ContainerPlayground.h"
#include <iostream>

int main() {
    Hello hello{};
    hello.sayHello(std::cout);

    VariableSandbox vs{};
    vs.launch(std::cout);

    //std::cout << inputAge(std::cin);

    SequencePlayground sp{};

    sp.launch(std::cout);

    FunctionSandbox fs{};
    fs.launch(std::cout);


    //Calling a static function of a class
    ClassSandbox::staticTestFunction();

    std::cout << ClassSandbox::constTestVariable;

    ClassSandbox cs{};

    //TODO: Doesn't work properly
   // std::cout << Date::mybirthday;
 //   std::cout << mybirthday;

    Date someday{2015, 9, 15};

    std::cout << "\n" << someday << "\n" ;

    ContainerPlayground cp{};
    cp.launch();

}


/*
    std::cout << "Type a sentences:" << charc(std::cin) << std::endl;
    //TODO: find way to clear inputstream..
    //std::cin.clear(); //<-- doesn't work
    std::cout << "Type a sentences:" << allcharc(std::cin) << std::endl;
    return 0;
}*/