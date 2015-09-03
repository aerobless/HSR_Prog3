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

void Date::read(std::istream& in) {
    int in_day { }, in_month { }, in_year { };
    char sep1 { }, sep2 { };
    in >> in_day >> sep1 >> in_month >> sep2 >> in_year;
    if (isValidDate(1,1,1)) //should be  (isValidYear(in_day))
        std::swap(in_day, in_year);
    if (in_year >= 0 && in_year < 100)
        in_year += 2000;
    if (!in.fail() && sep1 == sep2
        && (sep1 == '.' || sep1 == '/' || sep1 == '-')
        && isValidDate(in_year, in_month, in_day)) {
        year = in_year;
        month = in_month;
        day = in_day;
    } else {
        in.setstate(std::ios::failbit | in.rdstate());
    }
}

Date::Date(std::istream &in):year{},month{},day{} {
    read(in);
    if(in.fail()){
        throw std::out_of_range{"invalid date"};
    }
}