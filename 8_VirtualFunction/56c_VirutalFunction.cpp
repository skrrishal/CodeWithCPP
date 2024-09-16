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

class DerWin : virtual public BaseWin
{
public:
    int var_der = 450;
    void display() override
    {
        cout << "2_Base Value : " << var_base << endl;
        cout << "2_Derived Value : " << var_der << endl;
    }
};

class NewWin : virtual public BaseWin, public DerWin
{
public:
    int var_new = 1000;
    void display() override
    {
        cout << "3_Base Value : " << var_base << endl;
        cout << "3_Derived Value : " << var_der << endl;
        cout << "3_New Value : " << var_new << endl;
    }
};

int main()
{
    BaseWin *base_ptr;
    DerWin *der_ptr;
    NewWin *new_ptr;

    BaseWin obj_base;
    DerWin obj_der;
    NewWin obj_new;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    // Pointing base_ptr to obj_new (object of NewWin)
    base_ptr = &obj_new;
    base_ptr->display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Pointing der_ptr to obj_new (object of NewWin)
    der_ptr = &obj_new;
    der_ptr->display();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Direct call to NewWin's display
    obj_new.display();

    return 0;
}
