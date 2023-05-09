 cout << "\nPerforming addition operation \n";

    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            if (m == n)
            {
                cout << "matrix "
                     << "[" << m << n << "]"
                     << " = " << matrix[m][n] + matrix[m][n] << "\n";
            }
            else
            {
                cout << " - " << matrix[m][n] << "\n";
            }
        }
        cout << endl;
    }