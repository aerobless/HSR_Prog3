#ifndef INC_03_EXAMS_DECK_H
#define INC_03_EXAMS_DECK_H

#include <deque>
#include <algorithm>
#include <stdexcept>

template<typename T>
class ShuffelSet {
    using container = std::deque<T>;
    container c;
    
    using size_type = typename container::size_type;
    using value_type = typename container::value_type;
    using initializer_list=std::initializer_list<T>;
    using const_iterator=typename std::deque<T>::const_iterator;
    using iterator=typename std::deque<T>::iterator;
    using reverse_iterator=typename std::deque<T>::reverse_iterator;
    using const_reverse_iterator=typename std::deque<T>::const_reverse_iterator;

public:
    size_type size() const { return c.size(); }

    bool empty() const { return c.empty(); }

    T front() const {
        if(!empty()){ return c.front();
        } else{ throw std::out_of_range("Set empty"); }
    }
    T back() const {
        if(!empty()){ return c.back();
        }else{ throw std::out_of_range("Set empty"); }
    }
    void pop_front() {
        if(!empty()){ c.pop_front();
        }else{ throw std::out_of_range("Set empty"); }
    }
    void push_back(T elem) {
        c.push_back(elem);
        std::random_shuffle(c.begin(), c.end());
    }

    //Konstruktoren
    ShuffelSet() = default;
    ShuffelSet(initializer_list il): c{il} { }
    explicit ShuffelSet(size_type n): c {n} { }
    ShuffelSet(size_type n, const value_type& val): c(n, val) {}
    template <typename ITER>
    ShuffelSet(ITER first, ITER last): c{first, last} {}

    //Iteratoren
    iterator begin() { return c.begin(); }
    const_iterator cbegin() const { return c.cbegin(); }
    iterator end() { return c.end(); }
    const_iterator cend() const { return c.cend(); }
    reverse_iterator rend() { return c.rend(); }
    const_reverse_iterator crend() const { return c.crend(); }
    reverse_iterator rbegin() { return c.rbegin(); }
    const_reverse_iterator crbegin() const { return c.crbegin(); }
};

#endif //INC_03_EXAMS_DECK_H
