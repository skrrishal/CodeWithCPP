#include <iostream>
using namespace std;

class Employee
{
    int id;
    // static
    int count = 0; // Default value 0

public:
    void setData()
    {
        cout << "Enter the ID : ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The ID of Client is : " << id << endl;
        cout << "Count is : " << count << endl;
    }
};

// int Employee ::count;

int main()
{
    Employee Merus, Maya, Kaya;
    // Merus.id = 34;
    // Merus.count = 3;

    Merus.setData();
    Merus.getData();

    cout << "---------------------------------" << endl;

    Maya.setData();
    Maya.getData();

    cout << "---------------------------------" << endl;

    Kaya.setData();
    Kaya.getData();

    return 0;
}