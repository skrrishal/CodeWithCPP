#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with insert_text stream
    ofstream insert_text("61_a.txt");

    string str;

    cout << "Enter Name : ";
    cin >> str;

    insert_text << "My Name is : " + str << endl;

    insert_text.close();

    ifstream show_text("61_a.txt");
    string content;
    // show_text >> content;
    getline(show_text, content);

    cout << "Content of File....." << endl
         << content << endl;

    show_text.close();

    return 0;
}