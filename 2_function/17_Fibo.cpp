#include <iostream>
using namespace std;

int fibo(int);
void fiboseries(int);

int main()
{
    int n;
    cout << "Enter Num: ";
    cin >> n;
    cout << "The Fibo of " << n << " is " << fibo(n) << endl;
    fiboseries(n);

    return 0;
}

int fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

void fiboseries(int n)
{
    int t1 = 1, t2 = 1, nextTerm;
    if (n == 0)
    {
        cout << "Fibonacci Series: " << t1;
    }
    else
    {
        cout << "Fibonacci Series: " << t1 << ", " << t2;
    }

    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << ", " << nextTerm;
    }
    cout << endl;
}
