#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void oncompli();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format... ";
            exit(0);
        }
    }
}

void binary::oncompli()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.oncompli();
    cout << "\n-------------" << endl;
    b.display();
    return 0;
}