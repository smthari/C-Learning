#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename1, filename2;
    cout << "Enter the name of the file to copy: ";
    cin >> filename1;
    cout << "Enter the name of the new file: ";
    cin >> filename2;

    ifstream infile(filename1);
    ofstream outfile(filename2);

    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            outfile << line << endl;
        }
        cout << "File copied successfully." << endl;
    } else {
        cout << "Error opening file." << endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
