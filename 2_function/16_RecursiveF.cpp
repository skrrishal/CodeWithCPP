#include <iostream>
using namespace std;

int fact(int);

int main()
{
    int n;
    cout << "ENtr Num : ";
    cin >> n;
    cout << "The Fact of " << n << " is " << fact(n);

    return 0;
}

int fact(int n)
{
    if (n < 0)
    {
        cout << "Please Enter Positive Number...";
    }

    else if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        cout << "Invalid Input";
    }
    return n * fact(n - 1);
}