//Power function power(a,b)
//This uses Multiplication.hpp and Division.hpp, please include it with your code.

#ifndef CPP_POWER_H
#define CPP_POWER_H

#include <iostream>
#include <string>
#include "Multiplication.hpp"
#include "Division.hpp"

string power(string a, string b) {
    if (b == "0") return "1";
    string result = "1";

    while (b != "0") {
        if ((b.back() - '0') % 2 == 1) {
            result = multiply(result, a);
        }
        a = multiply(a, a); // Square 'a'
        b = div(b, "2"); // Divide 'b' by 2
    }

    return result;
}

#endif // CPP_POWER_H
