#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw "Division by zero!";
        }

        quotient = dividend / divisor;
        cout << "Quotient = " << quotient << endl;
    }
    catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
