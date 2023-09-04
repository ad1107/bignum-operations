#include <iostream>
#include"operations/Addition.h"
#include"operations/Subtraction.h"
#include"operations/Multiplication.h"
#include"operations/Division.h"
#include"operations/Modulo.h"

using namespace std;

int main() {
    cout << "**Demonstration of the big-num implementation of common math operations using strings**\n"
         << "\nNote: for most cases, if the calculation is too high,\n"
         << "consider using 'unsigned long long' (10^19)\n"
         << "or using more efficient algorithms.\n"
         << "\nOnly using these algorithms as a last resort.\n";

    cout << "Type your desired calculation here (+, -, *, / (integer result), %): \n";
    char c;
    string result;
    cin >> c;
    string a, b;

    cout << "Enter the numbers: \n";
    cin >> a >> b;

    switch (c) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = subtract(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            if (b != "0") result = div(a, b);
            else {
                cout << "Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        case '%':
            if (b != "0") result = mod(a, b);
            else {
                cout << "Modulo by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1;
    }

    cout << "\nResult:\n" << result << endl;
    return 0;
}
