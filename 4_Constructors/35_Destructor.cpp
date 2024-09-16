#include <iostream>
using namespace std;

int count = 0;

class Num
{

public:
    Num()
    {
        count++;
        cout << "Constructor Called...." << count << endl;
    }

    ~Num()
    {
        count--;
        cout << "Destructor Called...." << count << endl;
    }
};

int main()
{
    cout << "Inside Main Function.." << endl;
    cout << "First object N1 is Created.." << endl;
    cout << "Count : " << count << endl;

    Num n1;
    {
        cout << "Entering the Block" << endl;
        cout << "Creating Two more objects." << endl;
        Num n2, n3;
        cout << "Exiting Block" << endl;
    }

    cout << "Back to Main..." << endl;

    return 0;
}