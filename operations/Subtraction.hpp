//Subtraction function subtract(a,b)

#ifndef CPP_SUBTRACTION_H
#define CPP_SUBTRACTION_H

#include<iostream>
#include<string>
#include<vector>
#include"toBignumString.hpp"

using namespace std;


bignum subtraction(bignum a, bignum b) {
    bignum c;
    c.resize(max(a.size(), b.size()));
    a.resize(c.size());
    b.resize(c.size());
    long long mem = 0;
    for (int i = 0; i < c.size(); ++i) {
        long long sub = a[i] - b[i] - mem;
        if (sub < 0) {
            mem = 1;
            sub += 10;
        } else
            mem = 0;
        c[i] = sub;
    }
    // Remove leading zeros
    while (c.size() > 1 && c[c.size() - 1] == 0) c.pop_back();
    return c;
}

string subtract(string a, string b) {
    bignum A = toBignum(a);
    bignum B = toBignum(b);
    bignum C = subtraction(A, B);
    return toString(C);
}

#endif //CPP_SUBTRACTION_H
