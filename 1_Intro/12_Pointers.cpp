#include <iostream>
using namespace std;

int main()
{
    int x = 47;
    int *y = &x;
    int **z = &y;

    cout << "The X is " << x << endl; // Print X value
    cout << "------------------------------" << endl;
    cout << "The address of X is " << y << endl; // Print X adrress
    cout << "------------------------------" << endl;
    cout << "The *Y is " << *y << endl; // Print Y value which value of address x
    cout << "------------------------------" << endl;
    cout << "The address of Y is " << z << endl;
    cout << "------------------------------" << endl;
    cout << "The Z value is " << **z << endl;
    return 0;
}