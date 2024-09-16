#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getData()
    {
        cout << "Real Number : " << real << endl
             << "Imaginary Number : " << imaginary << endl;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;

    // (*ptr).setData(2, 3);        //Exactly same as
    // ptr->setData(2, 3);

    // (*ptr).getData(); // as good as
    // ptr->getData();

    // --------------------------------------
    // Array of Objects

    Complex *ptrr = new Complex[3];
    ptrr->setData(5, 6);
    ptrr->getData();

    return 0;
}