#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalc
{
    int n1, n2;

public:
    SimpleCalc() {}

    void Operations()
    {

        while (true)
        {

            int ch;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "5. Exit.." << endl;

            cout << "\nEnter Choice: ";
            cin >> ch;

            if (!(ch == 5))
            {
                cout << "Number 1: ";
                cin >> n1;
                cout << "Number 2: ";
                cin >> n2;
            }

            if (ch > 0)
            {
                switch (ch)
                {
                case 1:
                    cout << "Addition: " << n1 << " + " << n2 << " = " << n1 + n2 << endl;
                    break;

                case 2:
                    cout << "Subtraction: " << n1 << " - " << n2 << " = " << n1 - n2 << endl;
                    break;

                case 3:
                    cout << "Multiplication: " << n1 << " * " << n2 << " = " << n1 * n2 << endl;
                    break;

                case 4:
                    if (n2 != 0)
                    {
                        float sum = static_cast<float>(n1) / n2;
                        cout << "Division: " << n1 << " / " << n2 << " = " << sum << endl;
                    }
                    else
                    {
                        cout << "Error: Division by zero is not allowed." << endl;
                    }
                    break;

                case 5:
                    exit(0);
                    break;

                default:
                    cout << "Invalid Choice" << endl;
                    break;
                }
            }
            else
            {
                cout << "Invalid Choice" << endl;
            }

            cout << endl; // Add a newline for better readability
        }
    }
};

class ScientificCalc
{
    int n1, n2, n;

public:
    ScientificCalc() {};

    void S_Operations()
    {
        while (true)
        {
            int ch;

            // Simple Calculation ...
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "5. Power of Number" << endl;

            // Scientific Calculation ...
            cout << "6. Sine" << endl;
            cout << "7. Cosine" << endl;
            cout << "8. Tangent" << endl;
            cout << "9. Cosec" << endl;
            cout << "10. Sec" << endl;
            cout << "11. Cotangent" << endl;
            cout << "12. Log " << endl;

            // Exit ....
            cout << "13. Exit " << endl;

            cout << "\nEnter Choice: ";
            cin >> ch;

            if (ch == 5)
            {
                cout << "Enter Base : ";
                cin >> n1;
                cout << "Enter Power :";
                cin >> n2;
            }

            else if (ch == 6 || ch == 7 || ch == 8 || ch == 9 || ch == 10 || ch == 11 || ch == 12)
            {
                cout << "Enter Number : ";
                cin >> n;
            }

            if (!(ch == 13))
            {
                cout << "Number 1: ";
                cin >> n1;
                cout << "Number 2: ";
                cin >> n2;
            }

            if (ch > 0)
            {

                switch (ch)
                {
                case 1:
                    cout << "Addition: " << n1 << " + " << n2 << " = " << n1 + n2 << endl;
                    break;

                case 2:
                    cout << "Subtraction: " << n1 << " - " << n2 << " = " << n1 - n2 << endl;
                    break;

                case 3:
                    cout << "Multiplication: " << n1 << " * " << n2 << " = " << n1 * n2 << endl;
                    break;

                case 4:
                    if (n2 != 0)
                    {
                        float sum = static_cast<float>(n1) / n2;
                        cout << "Division: " << n1 << " / " << n2 << " = " << sum << endl;
                    }
                    else
                    {
                        cout << "Error: Division by zero is not allowed." << endl;
                    }
                    break;

                case 5:
                    cout << n1 << " raise to " << n2 << " is " << pow(n1, n2) << endl;
                    break;

                case 6:
                    cout << "Sine of " << n << " is " << sin(n) << endl;
                    break;

                case 7:
                    cout << "Cosine of " << n << " is " << cos(n) << endl;
                    break;

                case 8:
                    cout << "Tangent of " << n << " is " << tan(n) << endl;
                    break;

                case 9:
                    cout << "Cosec of " << n << " is " << asin(n) << endl;
                    break;

                case 10:
                    cout << "Sec of " << n << " is " << acos(n) << endl;
                    break;

                case 11:
                    cout << "Cotangent of " << n << " is " << atan(n) << endl;
                    break;

                case 12:
                    cout << "LOg of " << n << " is " << log(n) << endl;
                    break;

                case 13:
                    exit(0);
                    break;

                default:
                    cout << "Invalid Choice" << endl;
                    break;
                }
            }
            else
            {
                cout << "Invalid Choice" << endl;
            }

            cout << endl; // Add a newline for better readability
        }
    }
};

int main()
{
    // SimpleCalc sc;
    // sc.Operations();

    ScientificCalc SFC;
    SFC.S_Operations();

    return 0;
}