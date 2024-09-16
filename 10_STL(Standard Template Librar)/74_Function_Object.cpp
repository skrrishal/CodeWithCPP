#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects : Function wrapped in a class so that it available like an object .

    int arr[] = {4, 1, 3, 12, 144, 1223, 321};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + 7); // set array in ascending order

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;

    sort(arr, arr + 7, greater<int>()); // set array in descending order

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}