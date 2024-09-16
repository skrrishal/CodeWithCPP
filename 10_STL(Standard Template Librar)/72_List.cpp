#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr;

    for (auto itr = lst.begin(); itr != lst.end(); ++itr)
    {
        cout << *itr;
        auto next_itr = itr;
        ++next_itr;

        if (next_itr != lst.end())
        {
            cout << ", ";
        }
        else
        {
            cout << " .";
        }
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 Length
    list1 = {4, 5, 66, 121, 554, 324, 13};

    cout << "List 1 : ";
    // list1.pop_front();
    // list1.remove(66);
    list1.sort();
    // list1.reverse();

    display(list1);

    list<int> list2(7); // Empty List of size 7
    list2 = {4, 1, 5, 45, 44};

    cout << "List 2 : ";
    display(list2);

    return 0;
}
