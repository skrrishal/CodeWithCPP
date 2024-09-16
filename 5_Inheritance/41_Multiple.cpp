#include <iostream>
using namespace std;

class A
{
protected:
    int baseA;

public:
    void set_baseA(int a)
    {
        baseA = a;
    }
};

class B
{
protected:
    int baseB;

public:
    void set_baseB(int b)
    {
        baseB = b;
    }
};

class DerC : public A, public B
{
public:
    void show()
    {
        cout << "Value of A : " << baseA << endl
             << "Value of B : " << baseB << endl;

        int sum = baseA + baseB;

        cout << "A + B = " << sum << endl;
    }
};

int main()
{
    DerC caller;
    caller.set_baseA(10);
    caller.set_baseB(11);
    caller.show();

    return 0;
}