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

class NewWin : public BaseWin
{
public:
    int var_new = 1000;
    void display()
    {
        cout << "3_Base Value : " << var_base << endl;
        cout << "3_New Value : " << var_new << endl;
    }
};

int main()
{
    BaseWin *base_ptr;

    BaseWin obj_base;
    DerWin obj_der;
    NewWin obj_new;

    // Pointing base_ptr to obj_der (object of DerWin)
    base_ptr = &obj_der;
    base_ptr->display();

    // Pointing base_ptr to obj_new (object of NewWin)
    base_ptr = &obj_new;
    base_ptr->display();

    return 0;
}
