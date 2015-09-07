#ifndef INC_03_EXAMS_SB_ITERATOR_H
#define INC_03_EXAMS_SB_ITERATOR_H


#include <iterator>
#include <iostream>

struct sb_iterator:std::iterator<std::output_iterator_tag, long long> {
    sb_iterator() = default;
    explicit sb_iterator(long long c):counter(c){}

    void operator++()const{}
    sb_iterator const &operator*()const{
        return *this;
    }
    void operator=(int val) const {
        std::cout << "val= "<<val<<'\n';
    }




private:
    long long counter{};

};

struct MyIntOutIter
        :std::iterator<std::output_iterator_tag,int> {
    void operator++()const{}
    MyIntOutIter const &operator*()const{
        return *this;
    }
    void operator=(int val) const {
        std::cout << "val= "<<val<<'\n';
    }
};


#endif //INC_03_EXAMS_SB_ITERATOR_H
