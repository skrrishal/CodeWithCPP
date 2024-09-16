#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {};
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "Copy Constructor Called";
        a = obj.a;
    }

    void display()
    {
        cout << "\nThe Number is " << a << endl;
    }
};

int main()
{
    Number n1 = Number(4);
    // n1.display();

    Number z1(n1);
    z1.display();
    return 0;
}