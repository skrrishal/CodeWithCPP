#include <iostream>
using namespace std;

typedef struct Employee
{
    int Id;
    string job;
    float salary;
} emp;

union student
{
    int rice;
    char subject;
    float weigth;
};

/***********************************/
/*************Main Function*****************/
/***********************************/
int main()
{
    // 1. Structure Definiton
    // struct Employee Meher;
    // Meher.Id = 112;
    // Meher.job = "IT Analyst";
    // Meher.salary = 100000;

    // cout << Meher.Id << endl;
    // cout << Meher.job << endl;
    // cout << Meher.salary << endl;

    // 2. Union Definiton
    // union student s1;
    // s1.rice = 3;
    // s1.subject = 'M';
    // s1.weigth = 56;

    // cout << s1.weigth << endl;

    // 3. Enum Definition
    enum Meal
    {
        breakfast, // 0
        lunch,     // 1
        dinner     // 2
    };

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}