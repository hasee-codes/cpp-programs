#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 85;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout << "Student Marks = " << s.marks;
}

int main()
{
    Student s;

    display(s);

    return 0;
}
