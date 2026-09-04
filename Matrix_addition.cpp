#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, columns;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter first matrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of matrices:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
