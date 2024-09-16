#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Bartos
{
    T1 a;
    T2 b;
    T3 c;

public:
    Bartos(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "A = " << a << endl
             << "B = " << b << endl
             << "C = " << c << endl;
    }
};

int main()
{
    Bartos<> bt(3, 4.5, 'G'); // Defualt Params used here...
    // bt.display();

    // After changing data types
    Bartos<float, char, string> bt2(4.5, 'M', "Hitman 3");
    bt2.display();

    return 0;
}