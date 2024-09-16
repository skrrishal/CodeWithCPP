#include <iostream>
using namespace std;

class ComplexNum
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1, b = v2;
    }
    void setDatabySum(ComplexNum o1, ComplexNum o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void PrintNum()
    {
        cout << "Complex Equation = " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    ComplexNum c1, c2, c3;
    c1.setData(2, 3);
    c1.PrintNum();

    c2.setData(4, 1);
    c2.PrintNum();

    c3.setDatabySum(c1, c2);
    c3.PrintNum();
    return 0;
}