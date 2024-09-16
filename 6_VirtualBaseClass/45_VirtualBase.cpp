#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_roll_no()
    {
        cout << "Roll No. : " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }

    void print_marks()
    {
        cout << "Maths Marks : " << maths << endl
             << "Physics Marks : " << physics << endl;
    }
};
class Sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Sports Score : " << score << endl;
    }
};

class Result : public Test, public Sport
{
private:
    float total;

public:
    void displayResult()
    {
        print_roll_no();

        total = maths + physics + score;
        print_marks();
        print_score();

        cout << "Total Score : " << total << endl;
    }
};

int main()
{
    Result Sazer;
    Sazer.set_number(111);
    Sazer.set_marks(87, 85);
    Sazer.set_score(47);
    Sazer.displayResult();
    return 0;
}