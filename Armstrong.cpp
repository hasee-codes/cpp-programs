#include <iostream>
using namespace std;

int main()
{
    int n, original, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        result = result + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (result == original)
        cout << original << " is an Armstrong Number";
    else
        cout << original << " is Not an Armstrong Number";

    return 0;
}
