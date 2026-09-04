#include <iostream>
using namespace std;

int main()
{
    int numbers[100], n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum = " << sum;

    return 0;
}
