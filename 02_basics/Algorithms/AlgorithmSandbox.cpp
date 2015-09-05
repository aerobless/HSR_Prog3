//
// Created by Theo Winter on 04/09/15.
//

#include "AlgorithmSandbox.h"
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <iostream>


void AlgorithmSandbox::launch(){

    std::vector<std::string> v{"hi ","how ","are ","you?"};
    auto s=accumulate(v.begin(), v.end(), std::string{});
    std::cout << s; //hi how are you?

    fill(v.begin(), v.end(), "dude");
    auto s2=accumulate(v.begin(), v.end(), std::string{});
    std::cout <<  s2; //dudedudedude..

    fill_n(std::ostream_iterator<std::string>(std::cout, " "),8,"dude");

    generate(v.begin(), v.end(), [](){return "lol";});
    //                       generator function could be used here

    generate_n(std::ostream_iterator<std::string>(std::cout, " "), 8, [](){return "lol";});
    //                                                       generator function could be used here

    std::vector<int> v2{1,2,3};
    iota(v2.begin(), v2.end(), 5); //adds 5 to every number
    for(auto const &p:v2){
        std::cout << p << "\n"; // 5 6 7
    }

    std::vector<int> const haystack{3,1,4,5,9,2,3,6};
    std::vector<int> const needle{4,5,9};
    auto it_start=search(haystack.begin(), haystack.end(), needle.begin(), needle.end());
    /*for(it_start:haystack){
        std::cout << p << "\n"; // 5 6 7
    }*/


//    std::cout <<  s3; //dudedudedude..
}