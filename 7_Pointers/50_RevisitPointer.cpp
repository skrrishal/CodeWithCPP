#include <iostream>
using namespace std;

int main()
{
    // Basic Example...
    int a = 4;
    int *ptr = &a;
    cout << "A : " << *(ptr) << endl;

    // new Keyword/operator
    // int *p = new int(73);
    double *p = new double(73.02859234);
    cout << "P : " << *(p) << endl;

    // ----------------------------------------------------

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;

    // delete arr;

    for (int i = 0; i < 3; i++)
    {
        cout << "Arr[" << i << "] is " << arr[i] << endl;
    }

    // delete keyword/operator

    return 0;
}