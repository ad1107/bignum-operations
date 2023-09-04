//Addition function add(a,b).

#ifndef CPP_ADDITION_H
#define CPP_ADDITION_H

#include<iostream>
#include<string>
#include<vector>
#include"toBignumString.hpp"

bignum addition(bignum a, bignum b) {
    bignum c;
    c.resize(max(a.size(), b.size()));
    a.resize(c.size());
    b.resize(c.size());
    long long mem = 0;
    for (int i = 0; i < c.size(); ++i) {
        long long sum = mem + a[i] + b[i];
        c[i] = sum % 10;
        mem = sum / 10;
    }
    if (mem > 0) c.push_back(mem);
    return c;
}


string add(string a, string b) {
    bignum A = toBignum(a);
    bignum B = toBignum(b);
    bignum C = addition(A, B);
    return toString(C);
}


#endif //CPP_ADDITION_H
