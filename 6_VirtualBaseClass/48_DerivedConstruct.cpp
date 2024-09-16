#include <iostream>
using namespace std;

/*

Case :1

class B : public  A{
    // Order of execution of COnstruct --> first A() then B()
};

---------------------------------------------------------------------

Case :2

class A : public B,public C{
    // Order of execution of COnstruct --> first B() then C() then A()
};

---------------------------------------------------------------------
Case :3

class A : public B,virtual public C{
    // Order of execution of COnstruct --> first C() then B() then A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base 1 Class Constructor called " << endl;
    }

    void printData1()
    {
        cout << "The Base 1 value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base 2 Class Constructor called " << endl;
    }

    void printData2()
    {
        cout << "The Base 2 value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int der1, der2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c, der2 = d;
        cout << "Derived Class Constructor Called" << endl;
    }

    void printData3()
    {
        cout << "The value of Der1 is " << der1 << endl
             << "The value of Der2 is " << der2 << endl;
    }
};

int main()
{
    Derived Kate(11, 12, 13, 14);
    cout << "--------------------" << endl;
    Kate.printData1();
    cout << "--------------------" << endl;
    Kate.printData2();
    cout << "--------------------" << endl;
    Kate.printData3();
    // cout << "--------------------" << endl;
    return 0;
}