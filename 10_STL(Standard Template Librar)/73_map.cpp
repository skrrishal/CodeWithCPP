#include <iostream>
#include <string>
#include <map>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Skrrishal"] = 93;
    marksMap["Niko"] = 92;
    marksMap["Kate"] = 89;
    marksMap["Roman"] = 41;

    map<string, int>::iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second<<"\n";
    }

    return 0;
}