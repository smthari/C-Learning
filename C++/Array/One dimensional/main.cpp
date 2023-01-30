#include <iostream>
using namespace std;

int main()
{
    string name[5];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name : ";
        getline(cin, name[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        cout << name[j] << " ";
    }

    return 0;
}
