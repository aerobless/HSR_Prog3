//.cpp files contain implementations of functions/classes etc.
#include <iostream>
#include <string>
//including the interface where our sayHello function is definied.
#include "sayHello.h"

// Program entry function. Returns an int.
// 0 = everything ok, otherwise error-code
int main(int argc, const char * argv[]) {
    
    //Type:    Variable:    Value:
    std::string message = "Hello World";

    sayHello(std::cout);
    return 0; //
}
