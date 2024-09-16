#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A &setData(int a)
    void setData(int a)
    {
        // a = a;       // Wrong Value Aape
        this->a = a;
        // return *this;
    }

    void getData()
    {
        cout << "The Value of A is : " << a << endl;
    }
};

int main()
{
    A a;
    // a.setData(4).getData();
    a.setData(666666);
    a.getData();

    return 0;
}