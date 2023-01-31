#include <iostream>
using namespace std;

int main() {
    int num = 20;int *ip; // pointer declaration
    ip = &num;

    cout << "num :" << num << "\n";
    cout << "Memory address of num: " << ip << "\n";
    cout << "Value present at " << ip << " is " << *ip;
    return 0;
}