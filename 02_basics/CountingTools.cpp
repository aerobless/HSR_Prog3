#include <iostream>
#include "CountingTools.h"

/**
 * Ex W2: Count characters
 */
int allcharc(std::istream &in) {
    std::string input{};
    std::getline(in, input);
    return input.length();
}