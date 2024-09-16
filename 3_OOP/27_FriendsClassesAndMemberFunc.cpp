#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1, b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);

    void printNum()
    {
        cout << "Your Num is " << a << " + " << b << "i" << endl;
    }
};

class Calculator
{
    
};
int main()
{

    return 0;
}