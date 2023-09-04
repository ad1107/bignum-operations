//Modulo function mod(a,b)

#ifndef CPP_MODULO_H
#define CPP_MODULO_H

#include<iostream>
#include<string>
#include<vector>
#include"toBignumString.hpp"

using namespace std;


string mod(string a, string b) {
    bignum A = toBignum(a);
    long long B = stoll(b); // Convert string b to long long
    long long mem = 0;

    for (int i = A.size() - 1; i >= 0; i--) {
        long long div = mem * 10 + A[i];
        mem = div % B;
    }

    string result = to_string(mem);
    return result;
}


#endif //CPP_MODULO_H
