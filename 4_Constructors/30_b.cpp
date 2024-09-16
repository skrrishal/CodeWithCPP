#include <iostream>
using namespace std;

class Point
{
    int x, y, w, z, Xdis, Ydis;

public:
    Point(int a, int b, int c, int d)
    {
        x = a, y = b;
        w = c, z = d;
    }

    void Distance()
    {
        Xdis = w - x;
        Ydis = z - y;
        cout << "The Distance between A & B is : (" << Xdis << "," << Ydis << ")" << endl;
    }

    void displayPoint()
    {
        cout << "The 1st Point is : A(" << x << "," << y << ")" << endl;
        cout << "The 2nd Point is : B(" << w << "," << z << ")" << endl;
    }
};

int main()
{
    Point vert(3, 4, 12, 24);
    vert.displayPoint();
    vert.Distance();

    return 0;
}