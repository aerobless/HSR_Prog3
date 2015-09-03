//
// Created by Theo Winter on 03/09/15.
//

#ifndef INC_02_BASICS_DATE_H
#define INC_02_BASICS_DATE_H


#include <stdexcept>

class Date {
public:
    int year, month, day;

    //>> Input stream constructor
    explicit Date(std::istream& in);

    //Default Constructor
    Date():year{1991},month{12},day{31}{
    }

    //Explicitly used constructor
    Date(int year, int month, int day)
    :year{year}, month{month}, day{day}{ //Member init
        if(!isValidDate(year, month, day)){ //class invariant
            throw std::out_of_range{"invalid date"}; //prohibit invalid
        }
    }

    bool isValidDate(int year, int month, int day) const;
    void print(std::ostream& out) const;
    void read(std::istream& in); //Should be implemented in the .cpp

    //Static
    static Date mybirthday;
    static const unsigned zero{0};

    //Implementing a operator function, making Date sortable
    bool operator <(Date const& rhs) const;


};

//Other operators based on <
inline bool operator>(Date const& lhs, Date const& rhs){
    return rhs < lhs;
}
inline bool operator>=(Date const& lhs, Date const& rhs){
    return !(lhs < rhs);
}
inline bool operator<=(Date const& lhs, Date const& rhs){
    return !(rhs < lhs);
}

inline bool operator==(Date const& lhs, Date const& rhs){
    return !(lhs < rhs) && !(rhs < lhs) ;
}
inline bool operator!=(Date const& lhs, Date const& rhs){
    return !(lhs == rhs);
}

inline std::ostream& operator<<(std::ostream& out, Date const& d){
    d.print(out);
    return out;
}

inline std::istream& operator>>(std::istream& in, Date& d){
    d.read(in);
    return in;
}


#endif //INC_02_BASICS_DATE_H
