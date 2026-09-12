#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area() override
    {
        float r;

        cout << "Enter radius: ";
        cin >> r;

        cout << "Area = " << 3.14 * r * r;
    }
};

int main()
{
    Circle c;

    c.area();

    return 0;
}
