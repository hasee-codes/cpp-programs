#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Sum of 2 integers = " << c.add(10, 20) << endl;
    cout << "Sum of 3 integers = " << c.add(10, 20, 30) << endl;
    cout << "Sum of 2 decimals = " << c.add(10.5, 20.5) << endl;

    return 0;
}
