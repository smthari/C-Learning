#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() > str2.length()) {
        cout << str1 << " is longer than " << str2 << endl;
    }
    else if (str1.length() < str2.length()) {
        cout << str1 << " is shorter than " << str2 << endl;
    }
    else {
        cout << str1 << " and " << str2 << " are the same length" << endl;
    }

    return 0;
}
