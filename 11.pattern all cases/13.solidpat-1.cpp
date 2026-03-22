#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the val of--";
    cin >> n;
    cout << "method-1--" << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
                cout << (row + 1);
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << "method-2--" << endl;
    for (int row = 0; row < n; row++)
    {
        int totalCol = row + 1;
        for (int col = 0; col < totalCol; col++)
        {
            if (col == totalCol - 1)
            {
                cout << row + 1;
            }
            else
            {
                cout << (row + 1) << "*";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < n - 1 - row; col++)
        {
            if (col == (n - 1 - row) - 1)
            {
                cout << n-1-row;
            }
            else
            {
                cout << n - 1 - row << "*";
            }
        }
        cout << endl;
    }
    return 0;
}