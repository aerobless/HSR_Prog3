#ifndef INC_03_EXAMS_STAMMBRUCH_ITERATOR_H
#define INC_03_EXAMS_STAMMBRUCH_ITERATOR_H
#include <boost/operators.hpp>
#include <stdexcept>
#include <algorithm>

struct stammbruch_iterator
        :boost::input_iterator_helper<stammbruch_iterator, long double>{

    //Constructor
    explicit stammbruch_iterator(unsigned long long n=1)
    :counter{n}{
        if(n==0) {
            throw std::logic_error{"divison through zero not allowed"};
        }
    }

    //Comparison Operator
    bool operator==(const stammbruch_iterator &r) const{
        return counter==r.counter;
    }

    //Dereferencing Operator
    value_type  operator*() const{ return 1.0/counter; }

    //Advance Operator
    stammbruch_iterator &operator++(){
        ++counter;
        return *this;
    }

private:
    unsigned long long counter{1};
};

#endif //INC_03_EXAMS_STAMMBRUCH_ITERATOR_H
