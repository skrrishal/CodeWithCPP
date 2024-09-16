#include <iostream>
using namespace std;

// class Student
// --------------------------------------------
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "Roll No.: " << roll_number << endl;
}

// -------------------------------------------
// class Exam
class Exam : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float mat, float phy)
{
    maths = mat, physics = phy;
}

void Exam ::get_marks()
{
    cout << "Maths : " << maths << endl
         << "Physics : " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        percentage = (maths + physics) / 2;
        cout << "Percentage : " << percentage << "%" << endl;
    }
};

// ----------------------
// ----------------------
// ----------------------
int main()
{
    // Student st;
    // st.set_roll_number(47);
    // st.get_roll_number();

    // Exam ex;
    // ex.set_marks(86, 79);
    // ex.set_roll_number(47);
    // ex.get_roll_number();
    // ex.get_marks();

    Result Max;
    Max.set_roll_number(303);
    // Max.get_roll_number();
    Max.set_marks(90, 83);
    // Max.get_marks();
    Max.display_result();

    return 0;
}