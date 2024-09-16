#include <iostream>
using namespace std;

int main()
{
    int marks[] = {15, 45, 3, 43, 34};
    int marks_length = sizeof(marks) / sizeof(int);

    cout << "The Marks Array Size : " << marks_length << endl;
    cout << "------------------------------" << endl;

    // for (int i = 0; i < marks_length; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    int *x = marks;
    // cout << *x << endl;
    // cout << *(x + 1) << endl;
    // cout << *(x + 2) << endl;
    // cout << *(x + 3) << endl;
    // cout << *(x + 4) << endl;

    int i = 0;
    while (i < marks_length)
    {
        cout << "The Marks at Index " << i << " is " << marks[i] << endl;
        i++;
    }

    return 0;
}