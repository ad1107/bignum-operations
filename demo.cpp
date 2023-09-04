#include <iostream>
#include <string>
#include"operations/Addition.hpp"
#include"operations/Subtraction.hpp"
#include"operations/Multiplication.hpp"
#include"operations/Division.hpp"
#include"operations/Modulo.hpp"
#include"operations/Power.hpp"
#include"operations/nthRoot.hpp"

using namespace std;

int main() {
    cout << "**Demonstration of the big-num implementation of common math operations using strings**\n"
         << "\nNote: for most cases, if the calculation is too high,\n"
         << "consider using 'unsigned long long' (10^19)\n"
         << "or using more efficient algorithms.\n"
         << "\nOnly using these algorithms as a last resort.\n\n";

    cout << "Type your desired calculation here: \n"
            "Addition (+)\n"
            "Subtraction (-)\n"
            "Multiplication (*)\n"
            "Division (/) (Integer result), b is limited to long long\n"
            "Modulo (%), b is limited to long long\n"
            "Power (^)\n"
            "n-th Root (r), b is limited to long long\n"
            "Square Root (sqrt)\n"
            "Cube Root (cbrt)\n";

    string c, a, b, result;
    cin >> c;

    cout << "Enter the number(s): \n";

    if (c == "+") {
        cin >> a >> b;
        result = add(a, b);
    } else if (c == "-") {
        cin >> a >> b;
        result = subtract(a, b);
    } else if (c == "*") {
        cin >> a >> b;
        result = multiply(a, b);
    } else if (c == "/") {
        cin >> a >> b;
        if (b != "0") {
            result = div(a, b);
        } else {
            cout << "Division by zero is not allowed." << endl;
            return 1;
        }
    } else if (c == "%") {
        cin >> a >> b;
        if (b != "0") {
            result = mod(a, b);
        } else {
            cout << "Modulo by zero is not allowed." << endl;
            return 1;
        }
    } else if (c == "^") {
        cin >> a >> b;
        result = power(a, b);
    } else if (c == "r") {
        cin >> a >> b;
        result = nthRoot(a, b);
    } else if (c == "sqrt") {
        cin >> a;
        result = nthRoot(a, "2");
    } else if (c == "cbrt") {
        cin >> a;
        result = nthRoot(a, "3");
    } else {
        cout << "Invalid operation." << endl;
        return 1;
    }

    cout << "\nResult:\n" << result << endl;
    return 0;
}
