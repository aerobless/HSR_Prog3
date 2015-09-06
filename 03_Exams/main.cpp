#include "HS2014/inheritance.h"
#include "HS2014/setkAndSet.h"
#include "HS2014/bindAndFind.h"
#include "HS2014/constCorrect.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    //inheritanceLaunch();
    //sektAndSet();
    launch();

    int i{42};
    int const * pi = &i; //Good *pi=43; error für POINTER,  pi=34 erlaubt
    int *const pj=&i;  //Good pj=nullptr; error für REFERENCE,  *pj=34 erlaubt
/*
    Foo const cf{};
    cf.nothing();
//    cf.change(2); //error

    Foo const& crf {};
    crf.nothing();
 //   crf.change(2); //error

*/
  //  Foo2 f { };
//    f.get() = 5; //error, read-only variable is not assignable


    std::unique_ptr<int> p{};
    if(p == nullptr && !p){
        std::cout << "TRUE"; //TRUE
    }

    std::cout << "\n";
    char s[]{"Hello"};
    std::cout << sizeof(s); //6, wegen Terminalsymbol
}