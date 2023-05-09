#include <iostream>
using namespace std;

class circle {

private:
    float r; // private variable

    void area() { // private method
        cout << "Enter radius :";
        cin >> r;
        cout << "Area of radius " << r << " is : " << 3.142 * r * r << endl;
    }

    friend int main(); // defined main() as a friend function of a circle class
};

int main() {
    circle c1; // created object of class circle 
    c1.area(); // calling area() function

    cout << "we able to access private area() method because we defined main() as an friend function" << endl;
    return 0;
}