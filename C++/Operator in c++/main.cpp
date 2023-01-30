#include <iostream>
using namespace std;
int main()
{

    int a, b; // variable declared
    cout << " Enter two no: \n";
    cin >> a >> b; // taking input from user
    cout << "You Entered a:" << a << " b:" << b;

    // ARITHMETIC OPERATOR
    cout << "\n\n\n ARITHMETIC OPERATOR ";

    // addition
    int add = a + b;
    cout << "\n additon of given number is :" << add;

    // substraction
    int subs = a - b;
    cout << "\n subs of given number is : " << subs;

    // multipli
    int mul = a * b;
    cout << "\n multiplication of given number is :" << mul;

    int div = a / b;
    cout << "\n division of given number is :" << div;

    // ASSIGNMENT OPERATOR
    cout << "\n\n\n ASSIGNMENT OPERATOR";

    cout << "\n addition < subs : " << (add < subs);
    cout << "\n addition > subs : " << (add > subs);
    cout << "\n addition == subs : " << (add == subs);
    cout << "\n addition >= subs : " << (add >= subs);
    cout << "\n addition <= subs : " << (add <= subs);
    cout << "\n addition != subs : " << (add != subs);

    // LOGICAL OPERATOR
    cout << "\n\n\n LOGICAL OPERATOR";

    cout << "\n addition < 15 && subs <10 : " << (add < 15 && subs < 10);
    cout << "\n addition < 15 || subs <10 : " << (add < 15 || subs < 10);
    cout << "\n ! addition < 15 && subs <10 : " << !(add < 15 && subs < 10);

    //
    return 0;
}