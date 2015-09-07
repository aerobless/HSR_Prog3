#include "sbInBoost.h"
#include <boost/iterator/counting_iterator.hpp>
#include <boost/iterator/transform_iterator.hpp>
#include <iostream>

void sbVsBoost(){
    //Create a counter as boost iterator
    using counter=boost::counting_iterator<unsigned long long>;
    auto countIterator =counter{1};

    //Create a functor that divides
    using namespace std::placeholders;
    auto rec_functor =std::bind(std::divides<double>{}, 1, _1);

    //Create a transformation iterator to combine the two
    using boost::make_transform_iterator;
    auto rec_iterator =make_transform_iterator(countIterator, rec_functor);

    //Test:
    ++rec_iterator;
    std::cout << *rec_iterator; //0.5
}