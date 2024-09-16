#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Kaleen Bhaiya";
    string st2, st3;

    // Opening file using constructor and writing it
    // Jo File baneli naa hoi to bani jase....

    ofstream out("60_a.txt");
    out << st;

    // Opening file using constructor and reading it
    ifstream in("60_b.txt");
    // in >> st2; // Only first word prints .......

    getline(in, st2);    // lines prints in order when calling .......
    cout << st2 << endl; // Line : 1 Printed

    getline(in, st2);    // lines prints in order when calling .......
    cout << st2 << endl; // Line : 2 Printed

    getline(in, st2);    // lines prints in order when calling .......
    cout << st2 << endl; // Line : 3 Printed

    return 0;
}