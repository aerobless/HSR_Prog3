#include <ostream>
#include <vector>
#include <iostream>
#include "SequencePlayground.h"

void print(int x){
    std::cout << "hello" << x;
}

void SequencePlayground::launch(std::ostream &out){

    //Initialize a vector with an initial size of 6 containing the int default value 0.
    std::vector<int> six(6);
    out << six[4] << "\n"; // 0

    //Iterate through vector
    for(auto const i:six){
        out << i;
    }
    out << "\n";

    //Iterate through vector with references
    //A reference is needed to change an element of the vector
    for(auto &j:six){
        j = 2;
    }

    //Alternative way:
    for(auto it=six.cbegin(); it!=six.cend(); ++it){
        out << *it << ", ";
    }
    out << "\n";

    //Lambda example with for_each algorithm
    //The & captures references to local variables
    for_each(six.begin(), six.end(), [&](int x){
        out << "hi" << x;
    });

    //For_each example using a function instead of a lambda
    for_each(six.begin(), six.end(), print);

    out << "Sequence Playground done!\n";
}