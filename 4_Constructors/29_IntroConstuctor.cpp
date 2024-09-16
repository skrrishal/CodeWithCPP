#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    // Creating a Constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever the object is created.

public:
    Complex(void); // Constructor Declaration.

    void printNumber()
    {
        cout << "Sum : " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10, b = 5;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}