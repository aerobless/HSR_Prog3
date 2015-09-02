#ifndef INC_02_BASICS_VARIABLESANDBOX_H
#define INC_02_BASICS_VARIABLESANDBOX_H


#include <iosfwd>

struct VariableSandbox {
    void launch(std::ostream &out);
};

int inputAge(std::istream &in);

#endif //INC_02_BASICS_VARIABLESANDBOX_H
