#include <iostream>
using namespace std;

class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor Executed.." << endl;
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

/*



*/

int main()
{

    Test t(3, 4);

    return 0;
}