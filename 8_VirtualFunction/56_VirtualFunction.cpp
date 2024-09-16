#include <iostream>
using namespace std;

class BaseWin
{
public:
    int var_base = 20;

    virtual void display()
    {
        cout << "1_Base Value : " << var_base << endl;
    }
};

class DerWin : public BaseWin
{
public:
    int var_der = 450;
    void display()
    {
        cout << "2_Base Value : " << var_base << endl;
        cout << "2_Derived Value : " << var_der << endl;
    }
};

int main()
{
    BaseWin *base_ptr;

    BaseWin obj_base;
    DerWin obj_der;

    DerWin der_ptr;
    base_ptr = &obj_der;
    base_ptr->display();

    return 0;
}