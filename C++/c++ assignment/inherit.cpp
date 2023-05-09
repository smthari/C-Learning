#include <iostream>
using namespace std;

class Shape {
    public:
    // virtual void area() = 0;
     // virtual float area() = 0;
};

class circle : public Shape {
private:
    float r; // private variable

public:
     void area() { // private method
        cout << "Enter radius : ";
        cin >> r;
        cout << "Area of radius " << r << " is : " << 3.142 * r * r << endl;
    }
};

class square : public Shape {
private:
    float side; // private variable

public:
     void area() { // private method
        cout << "Enter side : ";
        cin >> side;
        cout << "Area of square  is : " << side * side << endl;
    }
};

class triangle : public Shape {

private:
    float base, height; // private variable

public:
    void area() { // private method
        cout << "Enter base : ";
        cin >> base;
        cout << "Enter height : ";
        cin >> height;
        cout << "Area of triangle  is : " << base * height / 2 << endl;
    }
};

int main() {
    circle c1; // created object of class circle
    c1.area(); // calling area() function

    square s1; // created object of class Square
    s1.area(); // calling area() function

    triangle t1; // created object of class triangle
    t1.area();   // calling area() function
    return 0;
}