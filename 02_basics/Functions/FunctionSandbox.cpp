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

    out << functionWithDefArg(2);
    out << functionWithDefArg(2, 2);

    out << "FunctionSandbox done! \n";
}

double FunctionSandbox::square(double value) const{
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

void FunctionSandbox::overloadTest(std::string in) const{
    std::cout << "dude "+in;
}
void FunctionSandbox::overloadTest() const{
    std::cout << "dude";
}

int FunctionSandbox::functionWithDefArg(int i, int y) const{
    return i+y;
}

void FunctionSandbox::printfunc(double x, double f(double)) const{
    std::cout << "f(" << x << ") = "<<f(x)<<"\n";
}