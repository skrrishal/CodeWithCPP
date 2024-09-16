#include <iostream>
using namespace std;

class BaseWin
{
public:
    int var_base;

    void display()
    {
        cout << "Base Value : " << var_base << endl;
    }
};

class DerWin : public BaseWin
{
public:
    int var_der;
    void display()
    {
        cout << "Base Value : " << var_base << endl;
        cout << "Derived Value : " << var_der << endl;
    }
};

int main()
{
    BaseWin *base_ptr;
    BaseWin obj_base;

    DerWin obj_derived;
    DerWin *der_ptr;
    base_ptr = &obj_derived; // Pointing Base class pointer to derived class

    base_ptr->var_base = 45;
    base_ptr->display();

    der_ptr->var_base = 90;
    der_ptr->var_der = 87;
    der_ptr->display();

    return 0;
}