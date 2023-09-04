//n-th Root function nthRoot(a,b)
//This uses Multiplication.hpp, Power.hpp, Addition.hpp, Subtraction.hpp. Please include it with your code.
#ifndef CPP_NTH_ROOT_H
#define CPP_NTH_ROOT_H

#include <iostream>
#include <string>
#include <vector>
#include "Multiplication.hpp"
#include "Power.hpp"
#include "Addition.hpp"
#include "Subtraction.hpp"

long long compare(const string &str1, const string &str2) {
    if (str1.length() < str2.length()) {
        return -1;
    } else if (str1.length() > str2.length()) {
        return 1;
    }

    for (long long i = 0; i < str1.length(); ++i) {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
    }

    return 0;
}

string nthRoot(string number, string ns) {
    long long n = stoll(ns);
    if (number == "0" || n <= 0) {
        return "0"; // The nth root of 0 or with n <= 0 is 0
    }

    string low = "1"; // Initialize the lower bound of the root
    string high = number; // Initialize the upper bound of the root

    while (compare(low, high) != 1) {
        string mid = div(add(low, high), "2");
        string midToNthPower = power(mid, to_string(n)); // Calculate mid^n

        if (compare(midToNthPower, number) == 0) {
            return mid;
        } else if (compare(midToNthPower, number) == 1) {
            high = subtract(mid, "1"); // Adjust the upper bound
        } else {
            low = add(mid, "1"); // Adjust the lower bound
        }
    }

    return low; // Return the result
}

#endif // CPP_NTH_ROOT_H
