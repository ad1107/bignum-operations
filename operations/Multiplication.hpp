//Multiplication function multiply(a,b)

#ifndef CPP_MULTIPLICATION_H
#define CPP_MULTIPLICATION_H

#include<iostream>
#include<string>
#include<vector>
#include"toBignumString.hpp"

bignum multiply(bignum a, long long b) {
    bignum c;
    c.resize(a.size());
    long long mem = 0;
    for (int i = 0; i < c.size(); ++i) {
        long long mul = mem + a[i] * b;
        c[i] = mul % 10;
        mem = mul / 10;
    }
    while (mem > 0) {
        c.push_back(mem % 10);
        mem /= 10;
    }
    return c;
}

bignum add(bignum a, bignum b) {
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

bignum multiplyBig(bignum a, bignum b) {
    bignum c, cnt;
    c.clear();
    c.push_back(0);
    cnt.clear();
    for (int i = 0; i < b.size(); ++i) {
        // Multiply each digit of b with a
        bignum tmp = multiply(a, b[i]);
        // Add zeros at the beginning
        tmp.insert(tmp.begin(), cnt.begin(), cnt.end());
        // Accumulate into the result
        c = add(c, tmp);
        cnt.push_back(0);
    }
    return c;
}

string multiply(string a, string b) {
    bignum A = toBignum(a);
    bignum B = toBignum(b);
    bignum C = multiplyBig(A, B);
    return toString(C);
}

#endif //CPP_MULTIPLICATION_H
