#include <ostream>
#include <vector>
#include <iostream>
#include <numeric>
#include <iterator>
#include "SequencePlayground.h"

void print(int x){
    std::cout << "hello" << x;
}

void SequencePlayground::launch(std::ostream &out){

    //Initialize a vector with an initial size of 6 containing the int default value 0.
    std::vector<int> six(6); // 000000

    //Initialize a vector with an initial size of 6 and the value of 3.
    std::vector<int> sixThree(6,3); // 333333

    std::vector<std::string> ddd{"ddd", "ddd", "ddd"}; // ddd ddd ddd

    #include <numeric>
    std::vector<int> numbers(100); // 0 0 0 0 ..
    iota(numbers.begin(), numbers.end(), 1); // 1 2 3 4 5 6 ..

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

    //Fill a vector from input stream
   /* using input=std::istream_iterator<int>;
    input eof{};
    std::vector<int> inVector{};
    std::copy(input{std::cin}, eof, back_inserter(inVector));*/

    //Fill vector
    std::vector<int> vecTen(10);
    fill(vecTen.begin(), vecTen.end(), 5); //5 5 5 5 5 5 5 5 5 5

    //Vector find first 0
    auto zero_it=find(six.begin(), six.end(), 0);
    if (zero_it == six.end()){
        out << "no zero found \n";
    }

    //Vector count
    out << count(six.begin(), six.end(), 0); //Count how many 0's there are
    out << count_if(six.begin(), six.end(), [](int x){return 0==(x%2);}); //Count all the even numbers

    out << "Sequence Playground done!\n";
}