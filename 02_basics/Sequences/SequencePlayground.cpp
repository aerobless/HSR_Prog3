#include <ostream>
#include <vector>
#include "SequencePlayground.h"

void SequencePlayground::launch(std::ostream &out){

    //Initialize a vector with an initial size of 6 containing the int default value 0.
    std::vector<int> six(6);
    out << six[4] << "\n"; // 0

    //Iterate through vector
    for(auto const i:six){
        out << i;
    }
    out << "\n";


    //FUNZT NOED:
    for(auto &j:six){
        j *= 2;
    }
    for(auto const i:six){
        out << i;
    }
    out << "\n";

    //FUNZT SCHO:
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


    out << "Sequence Playground done!\n";
}