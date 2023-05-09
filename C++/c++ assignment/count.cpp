#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int line_count = 0;
    int word_count = 0;
    int char_count = 0;
    string line;

    while (getline(infile, line)) {
        line_count++;

        istringstream iss(line);
        string word;
        while (iss >> word) {
            word_count++;
            char_count += word.length();
        }

        char_count++;  // account for newline character
    }

    cout << "Line count: " << line_count << endl;
    cout << "Word count: " << word_count << endl;
    cout << "Character count: " << char_count << endl;

    infile.close();

    return 0;
}
