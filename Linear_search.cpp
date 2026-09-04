#include <iostream>
using namespace std;

int main()
{
    int numbers[100], n, search;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == search)
        {
            cout << "Number found at position " << i + 1;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Number not found";

    return 0;
}
