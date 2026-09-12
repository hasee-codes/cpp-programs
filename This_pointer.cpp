#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int marks)
    {
        this->marks = marks;
    }

    void display()
    {
        cout << "Student Marks = " << this->marks;
    }
};

int main()
{
    Student s;

    s.setMarks(90);
    s.display();

    return 0;
}
