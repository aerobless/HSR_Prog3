//
// Created by Theo Winter on 03/09/15.
//

#include <iomanip>
#include "Date.h"

bool Date::isValidDate(int year, int month, int day) const {
    //implement check here
    return true;
}

bool Date::operator <(Date const& rhs) const {
    return year < rhs.year ||
           (year == rhs.year && (month < rhs.month ||
                                 (month==rhs.month && day < rhs.day)));
}

void Date::print(std::ostream& out) const {
    auto ch = out.fill('0');
    out << std::setw(2) << day << '.';
    out << std::setw(2) << month << '.';
    out << std::setw(4) << year;
    out.fill(ch);
}