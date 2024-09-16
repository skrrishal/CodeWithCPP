#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printNumber()
    {
        cout << "Sum : " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // Parameterized Constructor
{
    a = x, b = y;
}

int main()
{
    // Implicit call
    Complex xr(3, 4);
    xr.printNumber();

    // Explicit Call
    Complex yr = Complex(10, 122);
    yr.printNumber();
    return 0;
}