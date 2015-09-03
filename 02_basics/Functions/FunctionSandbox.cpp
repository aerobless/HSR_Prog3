#include <ostream>
#include <iostream>
#include "FunctionSandbox.h"

void FunctionSandbox::launch(std::ostream &out){
    using str=std::string;
    str s{"hello there"};

    //Lambda function, can be used inline
    auto const g=[](char c)->int{return std::toupper(c);};
    out << g('a'); //returns 65 = A

    //Inline function call
    out << inSquare(44) << "\n";

    //Custom namespace example
    demo::food();
    demo::subdemo::food();

    overloadTest("hi hi hi!");
    overloadTest();

    out << "FunctionSandbox done! \n";
}

double FunctionSandbox::square(double value){
    return value*value;
}

template <typename T>
auto square(T value) -> decltype(value*value) {
    return value*value;
}

//FunctionSandbox.cpp
void demo::food(){
    std::cout << "hi";
}

void demo::subdemo::food(){
    std::cout << "hi food";
}

void FunctionSandbox::overloadTest(std::string in){
    std::cout << "dude "+in;
}
void FunctionSandbox::overloadTest(){
    std::cout << "dude";
}