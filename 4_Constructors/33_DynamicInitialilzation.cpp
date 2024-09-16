#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float RateofInterest;
    float returnvalue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r value be like "0.05" etc
    BankDeposit(int p, int y, int r);   // r value be like 10%, 20% ,30% etc
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    RateofInterest = r;

    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + RateofInterest);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    RateofInterest = float(r) / 100;

    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + RateofInterest);
    }
}

void BankDeposit::show()
{
    cout << "Pricipal Amount was " << principal << endl
         << "Return valur after " << year
         << " is " << returnvalue << endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;

    // cout << "Enter the value P : ";
    // cin >> p;

    // cout << "Enter the value Y : ";
    // cin >> y;

    // cout << "Enter the value R : ";
    // cin >> r;

    // b1 = BankDeposit(p, y, r);
    // b1.show();

    cout << "Enter the value P : ";
    cin >> p;

    cout << "Enter the value Y : ";
    cin >> y;

    cout << "Enter the value R : ";
    cin >> R;

    b2 = BankDeposit(p, y, R);
    b2.show();

    return 0;
}