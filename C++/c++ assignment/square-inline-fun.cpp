#include <iostream>
using namespace std;

inline int square(int n) {
    cout << "square of given number is ";
    cout << n*n;
}

int main() {

    square(5);
    return 0;
}