#ifndef INC_03_EXAMS_INHERITANCE_H
#define INC_03_EXAMS_INHERITANCE_H
#include <iostream>
using std::cout;

struct baseClass {
    baseClass(){ cout << "Base Class constructed \n"; }
    ~baseClass(){cout << "Base Class killed \n"; }

    void greeting() {cout << "Base Greeting\n";};
    virtual void talk(){ cout << "Base Class Talk";};
};

struct secondClass: baseClass {
    secondClass(){ cout << "Second Class constructed \n";}
    ~secondClass(){cout << "Second Class killed \n"; }

    void greeting() {cout << "Second Greeting\n";};
    void talk(){ cout << "Second Class Talk";};
    virtual void doSomething(){cout << "Second Class doSomething";};
};

struct thirdClass: secondClass {
    thirdClass(){ cout << "Third Class constructed \n"; }
    ~thirdClass(){cout << "Third Class killed \n"; }

    void talk(){ cout << "Third Class Talk";};
    virtual void doSomething(){cout << "Third Class doSomething";};
};

struct thirdClassSpecial: secondClass {
    thirdClassSpecial():secondClass{}{ cout << "Third Class constructed \n"; }
    ~thirdClassSpecial(){cout << "Third Class killed \n"; }

    void talk(){ cout << "Third Class Talk";};
    virtual void doSomething(){cout << "Third Class doSomething";};
};

#endif //INC_03_EXAMS_INHERITANCE_H
