#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << a << " is the Largest";
    else if (b >= a && b >= c)
        cout << b << " is the Largest";
    else
        cout << c << " is the Largest";

    return 0;
}
