#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "Value A : " << a << endl;
        cout << "Value B : " << b << endl;
        cout << "Value C : " << c << endl;
        cout << "Value D : " << d << endl;
        cout << "Value E : " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee Skrrishal;
    Skrrishal.d = 51;
    Skrrishal.e = 293;
    // Skrrishal.b = 45;            Can't Access , it is private
    Skrrishal.setData(3, 544, 123);
    Skrrishal.getData();

    return 0;
}