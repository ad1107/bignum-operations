//Division function div(a,b)

#ifndef CPP_DIVISION_H
#define CPP_DIVISION_H

#include<iostream>
#include<string>
#include<vector>
#include"toBignumString.h"

bignum division(bignum a, long long b) {
    bignum c;
    c.resize(a.size());
    long long mem = 0;
    for (int i = c.size() - 1; i >= 0; i--) {
        long long div = mem * 10 + a[i];
        c[i] = div / b;
        mem = div % b;
    }
    //loại bỏ các số 0 ở đầu
    while (c.size() > 1 && c[c.size() - 1] == 0) c.pop_back();
    return c;
}

string div(string a, string b) {
    bignum A = toBignum(a);
    long long B = stoll(b); // Convert string b to long long
    bignum C = division(A, B);
    return toString(C);
}


#endif //CPP_DIVISION_H
