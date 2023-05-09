#include <iostream>
using namespace std;
class Box {
private: // private members
    int length, breadth, height; // private variables

public: // public members
    int getVolume() { // getVolume function
        return length * breadth * height;
    }

    void set(int l, int b, int h) { // set function
        length = l;  // assigned value of l to length variable
        breadth = b; // assigned value of b to breadth variable
        height = h;  // assigned value of h to  height variable
    }

    void displayValue() {
        cout << "l:" << length << " b:" << breadth << "h:" << height << endl;
    }

    Box operator+() // overloaded minus (-) operator
    {
        length = ++length;
        breadth = ++breadth;
        height = ++height;
    }
};

int main()
{
    Box B1; // Declare Box1 object of type Box class

    int volume; // int value variable 
    B1.set(12.0, 14.0, 10.0); // called set functino and assigned vlaue of l,b,h as an argument

    cout << "You defined following value for l , b , h " << endl;
    B1.displayValue(); // calling display displayValue() to display value of length,breadth,height

    volume = B1.getVolume(); // calling getVolume() and assigning output to volume variable 
    cout << "Volume of B1 : " << volume << endl; // printing value of volume

    cout << "After + operator overloading the value of l,b,h increment by 1" << endl;
    +B1; // plus operator overloading
    B1.displayValue(); // again // calling display displayValue() to display updated value of length,breadth,height after operator overloading

    volume = B1.getVolume();  // again calling getVolume() to get output of updated l,b,h
    cout << "Volume of B1 : " << volume << endl; // // printing update volume 

    return 0;
}