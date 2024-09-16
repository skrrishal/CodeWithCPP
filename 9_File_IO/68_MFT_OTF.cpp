#include <iostream>
using namespace std;

template <class T1>

class Berry
{
public:
    T1 data;

    Berry(T1 a)
    {
        data = a;
    }

    void display();
};

template <class T>
void Berry<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "Func1 = " << a << endl;
}

template <class T3>
void func(T3 c)
{
    cout << "Func2 = " << c << endl;
}

int main()
{
    // Berry<float> rb(45.435);
    // cout << rb.data<< endl;
    Berry<string> rb("Franklin Clinton");
    rb.display();
    cout << endl;
    func(34);

    return 0;
}