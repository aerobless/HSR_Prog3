#ifndef INC_03_EXAMS_SACKTEMPLATE_H
#define INC_03_EXAMS_SACKTEMPLATE_H

#include <vector>
#include <stdlib.h>

template <typename T> //One template param
class Sack
{
    using SackType=std::vector<T>;
    //typename needed because of dependant name
    using size_type=typename SackType::size_type; //dependant name size_type
    SackType theSack{};
public:
    bool empty() const{ return theSack.empty();}
    size_type  size() const { return theSack.size(); }
    void putInto(T const &item){ theSack.push_back(item); }
    T getOut(); //member function forward declaration
};
template <typename T>
inline T Sack<T>::getOut() { //shows how member functions are implemented outside the class
    if(! size()) throw std::logic_error{"empty Sack"};
    auto index = static_cast<size_type>(rand()%size()); //pick random element
    T retval{theSack.at(index)};
    theSack.erase(theSack.begin()+index);
    return retval;
}
#endif //INC_03_EXAMS_SACKTEMPLATE_H
