#include <iostream>
#include <vector>
using namespace std;

template <class T>

void display(vector<T> &v)
{
    cout << "Display Elements " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector
    vector<int> v1; // Zero length integer vector

    // int element, size = 5; //

    // cout << "Enter the Size of Vector :";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an Element " << i + 1 << " to add to this Vector : ";
    //     cin >> element;
    //     v1.push_back(element);
    // }

    // v1.pop_back();

    // vector<int> v2;

    // display(v1);

    // vector<int>::iterator iter = v1.begin();
    // v1.insert(iter + 1, 5000, 786);

    // display(v1);

    vector<char> v2(4); // 4-Element character vector
    v2.push_back('A');
    // display(v2);

    vector<char> v3(v2); // 4-element character vector from 'v2'

    vector<int> v4(3, 13);
    cout << endl;

    display(v4);

    return 0;
}