#include "VariableSandbox.h"
#include <ostream>
#include <istream>

void VariableSandbox::launch(std::ostream &out){

    int number{1}; //Normal initialization
    int zero{}; //Initialization with default value
    auto two = 2; //Letting the compiler determinte the type

    int const multiplication{5*7};
    double constexpr pi{3.14}; //fixed at compile time

    out << R"(\root.hsr\skripte\)" << "\n"; //Literal that ignores escape characters etc.

    out << "Variable Sandbox done!";
}

int inputAge(std::istream &in) {
    int age{-1};
    while(!in.eof()){ //Iterate until the end of the stream is reached
        if(in >> age){
            return age;
        }
        //Consume wrong character, the user can retry
        in.clear();
        std::string line{};
        getline(in, line);
    }
    return -1;
}