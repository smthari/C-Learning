#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    cout << "Enter matrix elements : ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "matrix "
                 << "[" << i << j << "]"
                 << " = " << matrix[i][j] << "\n";
        }
    }

    cout << "\nPerforming operation \n";

    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            if (k == l)
            {
                cout << "matrix "
                     << "[" << k << l << "]"
                     << " = " << matrix[k][l] * matrix[k][l] << "\n";
            }
            else
            {
                cout << " - " << matrix[k][l] << "\n";
            }
        }
        cout << endl;
    }
}