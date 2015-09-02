#include <iostream>
#include "CountingTools.h"

/**
 * W2Ex1: Count non-whitespace characters
 */
int charc(std::istream &in) {
    std::string input{};
    in >> input;
    return input.length();
}

/**
 * W2Ex2: Count characters
 */
int allcharc(std::istream &in) {
    std::string input{};
    std::getline(in, input);
    return input.length();
}