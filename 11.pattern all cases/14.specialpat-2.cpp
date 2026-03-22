#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the val--";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || row == n - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == n - row - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    //-homework
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == n - 1)
            {
                cout << (col + 1) << " ";
            }
            else
            {
                if (col == 0 || col == row)
                {
                    cout << (col + 1) << "  ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}