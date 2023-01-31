#include <iostream>
using namespace std;

int main()
{
    // Program to check number is +ve / -ve / zero
    /* int num;
    cout << "Enter value of num : ";
    cin >> num;

    if (num > 0)
        cout << num << " is positive number";

    else if (num < 0)
        cout << num << " is negative number";

    else
        cout << num << " is zero"; */

    // Program to print which vowel users has entered ( using if else ladder )
    /*  char letter;
     cout << "Enter letter : ";
     cin >> letter;
     if (letter == 'a' || letter == 'A')
     {
         cout << "You entered vowel " << letter;
     }
     else if (letter == 'e' || letter == 'E')
     {
         cout << "You entered vowel " << letter;
     }
     else if (letter == 'i' || letter == 'I')
     {
         cout << "You entered vowel " << letter;
     }
     else if (letter == 'o' || letter == 'O')
     {
         cout << "You entered vowel " << letter;
     }
     else if (letter == 'u' || letter == 'U')
     {
         cout << "You entered vowel " << letter;
     }
     else
     {
         cout << "You entered constant letter ";
     } */

    // Program to print days 1 = monday (switch case)
    /* int day;
    cout << "Enter day number : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Please enter valid day number";
        break;
    } */

    // Program to check prime number
    /* int number;
    cout << "Enter number : ";
    cin >> number;

    if (number % number == 0)
    {
        cout << "Given is number is prime number";
    }
    else
    {
        cout << "Given number is not prime number";
    } */

    // Power of base
    /* int base, power;
    cout << "Enter base : ";
    cin >> base;
    cout << "Enter power : ";
    cin >> power;
    int result = 1;

    do
    {
        result = result * base;
        power--;
    } while (power > 0);
    cout << result; */

    // Program to print pattern (for loop)
    /* int i, duplicate;
    cout << "Enter the number of duplicate: ";
    cin >> duplicate;

    for (i = 1; i <= duplicate; i++)
    {
        cout << "*__";
    }
    cout << "\n"; */
}
