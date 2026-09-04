#include <iostream>
using namespace std;

int main()
{
    int numbers[100], n, largest;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    largest = numbers[0];

    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}
