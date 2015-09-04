//
// Created by Theo Winter on 03/09/15.
//

#include <iostream>
#include "ClassSandbox.h"

void ClassSandbox::staticTestFunction() {
    std::cout << "I'm so static!";

    enum day_of_week {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun};
    //festgelegte Wert   1    2   3    4    5    6    7

    enum class launch_policy : unsigned char {
        sync=1, async=2, gpu=4, process=8, none=0
    };


}
