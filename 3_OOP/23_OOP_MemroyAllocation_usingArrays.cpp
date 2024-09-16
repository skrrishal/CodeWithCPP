#include <iostream>
using namespace std;

class Shop
{
    int itemID[50];
    int itemPrice[50];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void getPrice();
    void setPrice();
};

void Shop ::setPrice()
{
    int numItem;
    cout << "Enter the Dukaan You want to Add : ";
    cin >> numItem;

    for (int i = 0; i < numItem; i++)
    {
        cout << "Enter ID of Your Item : ";
        cin >> itemID[counter];
        cout << "Enter Price of Your Item : ";
        cin >> itemPrice[counter];
        counter++;

        // if (itemID[i] == itemID[numItem - counter])
        // {
        //     cout << "The ID is already allocated";
        // }
        // else
        // {
        // }
    }
}

void Shop ::getPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "\nItem ID : " << itemID[i] << " || " << "The Price is : " << itemPrice[i];
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.getPrice();
    return 0;
}