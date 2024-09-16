#include <iostream>
using namespace std;

class Y;  // Forward Declatration 

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

// Friend Banvu chhe \/ aane
void add(X o1, Y o2)
{
    cout << "Sum of datas of X & Y gives me " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(4);
    add(a1, b1);
    return 0;
}