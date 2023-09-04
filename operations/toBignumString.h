//Here's the universal function for these operations.
//Copy these to your code if you want to use one of these operations.

#ifndef CPP_TOBIGNUMSTRING_H
#define CPP_TOBIGNUMSTRING_H

#include <string>
#include <vector>

using namespace std;

typedef vector<long long> bignum;

bignum toBignum(string a) {
    bignum c;
    c.clear();
    for (int i = a.size() - 1; i >= 0; i--)
        c.push_back(a[i] - 48);
    return c;
}

string toString(bignum a) {
    string s = "";
    for (int i = a.size() - 1; i >= 0; i--)
        s += char(a[i] + 48);
    return s;
}

#endif // CPP_TOBIGNUMSTRING_H
