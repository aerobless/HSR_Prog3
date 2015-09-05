#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
#include "setkAndSet.h"

void sektAndSet(){
    std::string str("FizzyBubbele");
    std::cout << std::oct << str.size() << std::dec << '\n';
    //    Length of str converted to oct.      no effect, still newline.

    std::set<char> const s{str.cbegin(), str.cend()};
    for(auto d:s){
        std::cout << d;
    }
    std::cout << "\n";

    auto it2 = str.crend(); std::advance(it2, 3);
    std::cout <<"res:" << *it2 << "\n";

    std::cout << s.size() << "\n";

    auto it3 = str.end(); --it3; it3--;
    std::cout << *--it3;




    //Transforms word string toUpper and insterts it into a char set
    std::string const word("Hello");
    std::set<char> sSet{};
    std::transform(word.begin(), word.end(), std::inserter(sSet, sSet.begin()), ::toupper);

    std::string hello = "Hello World";
    std::transform(hello.begin(), hello.end(),hello.begin(), ::toupper);
    std::cout << hello; //HELLO WORLD

    //Outputs the chars in set s B-F-b-e-i ..
    std::ostream_iterator<char> outputIt{std::cout, "-"};
    std::copy(s.begin(), s.end(), outputIt);

}