#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derive : protected Base
{
};

int main()
{
    Base baba;
    Derive der;
    // cout << baba.a;   <---Access nai thaay
    // cout << der.a;   <---Access nai thaay

    return 0;
}