#include <iostream>
using namespace std;

template <class T1, class T2>

float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float x = funcAverage(22, 7);
    cout << "Average : " << x;

    return 0;
}