#include <iostream>
using namespace std;

// Derived Class Syntax

/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members,method,etc....
};

*/

// Base Class
class Employee
{

public:
    int id;
    float salary;
    Employee() {};
    Employee(int inpid)
    {
        id = inpid;
        salary = 15000;
    }
};

class Programmar : public Employee
{
public:
    // Programmar() {};
    Programmar(int inpid)
    {
        id = inpid;
    }
    int languageCode = 9;

    void getData()
    {
        cout << id;
    }
};

int main()
{
    Employee Max(1), Mona(2);
    cout << Max.salary << endl;
    cout << Mona.salary << endl;
    Programmar prog(13);
    cout << prog.languageCode << endl;
    cout << prog.id << endl;
    prog.getData();
    return 0;
}