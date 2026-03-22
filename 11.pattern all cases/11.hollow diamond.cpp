
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the val of n--";
    cin >> num;
    int n = num / 2;

    cout << "diamond hollow pyramid-\n";
    for (int row = 0; row < n; row++)
    { // spaces and star
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        { //-print star for 1st and last col
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            { //-for every col between 1st and last
              // col-print spaces.
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    { //-spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        //-star
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}