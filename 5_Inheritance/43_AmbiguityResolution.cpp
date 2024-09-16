#include <iostream>
using namespace std;

class BaseA
{
public:
    void joke()
    {
        cout << "Smile...🤣";
    }
};

class BaseB
{
public:
    void joke()
    {
        cout << "Smile...🤣";
    }
};

class BaseC : public BaseA, public BaseB
{
    int a;

    // public:
    //     void joke()
    //     {
    //         cout << "Smile...🤣";
    //     }
};

int main()
{
    BaseC ak;
    ak.joke();
    return 0;
}