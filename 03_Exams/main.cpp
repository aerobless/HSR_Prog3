#include "HS2014/inheritance.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;


    //Base Class constructed
    //Second Class constructed
    //Third Class constructed
    //thirdClass tC{};


    //Base Class constructed
    //Second Class constructed
    //Third Class constructed
    thirdClassSpecial tcS{};

    //empty
    secondClass sC{tcS};

    //empty
    baseClass &bC{tcS};

    cout << "\n\n";

    tcS.talk();
    sC.talk();
    bC.talk();

    cout << "\n\n";

    tcS.greeting();
    sC.greeting();
    bC.greeting();

    cout << "\n\n";
}