#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a, price = b;
    }

    void getData()
    {
        cout << "Item Code. : " << id << endl
             << "Price of Item : " << price << endl;
        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
    }
};

int main()
{
    /*
        1. General Store items
        2. Vegetable store items
        3. Hardware Store items
    */

    int shopSize = 3;
    int pid;
    float prc;

    Shop *ptr = new Shop[shopSize];
    Shop *ptrTemp = ptr;

    for (int i = 0; i < shopSize; i++)
    {
        cout << "Enter ID " << i + 1 << " : ";
        cin >> pid;

        cout << "Enter Price " << i + 1 << " : ";
        cin >> prc;

        cout << endl;

        ptr->setData(pid, prc);
        ptr++;
    }

    for (int j = 0; j < shopSize; j++)
    {
        cout << "Item Number : " << j + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}