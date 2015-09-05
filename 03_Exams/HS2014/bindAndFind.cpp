#include "bindAndFind.h"
#include <functional>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <vector>

void launch(){
    using std::placeholders::_1; //import placeholder _1
    auto mult = std::bind(std::multiplies<int>{},2,_1);
    auto plus = std::bind(std::plus<int>{}, mult, 11);
    auto mod = std::bind(std::modulus<int>{}, plus, _1);
    auto equals = std::bind(std::equal_to<int>{}, mod, 0);
    //Verwendung:
    //auto i=std::find_if(v.begin(), v.end(), equals);

    auto odd=std::bind(std::modulus<int>{},_1,2);
    std::cout << "odd(42) = " << odd(43) <<"\n"; //0 false
    std::cout << "odd(43) = " << odd(43) <<"\n"; //1 true

    //Example to do:
    std::vector<int> v(100);
    iota(v.begin(), v.end(), 2); //2,3,4,5,6,7,8..
    auto lambda=[](int j){return (2*j+11) % j==0;};
    auto i=find_if(v.begin(), v.end(), lambda);

    std::ostream_iterator<int> outputIt{std::cout, "-"};
    //std::copy(i, i.last, outputIt);

    for(auto a:v){
        std::cout << a;
    }




}