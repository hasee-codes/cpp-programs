#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    Student(const Student &s)
    {
        marks = s.marks;
    }

    void display()
    {
        cout << "Student Marks = " << marks;
    }
};

int main()
{
    Student s1(95);

    Student s2 = s1;

    s2.display();

    return 0;
}
