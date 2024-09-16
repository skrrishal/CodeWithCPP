#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream out;
    // out.open("62_a.txt"); // open use here

    // // string str;
    // // out << "THis is me ";
    // out.close();

    ifstream in;
    string st, st2;
    in.open("62_a.md");
    // in >> st;
    // cout << st;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();

    return 0;
}