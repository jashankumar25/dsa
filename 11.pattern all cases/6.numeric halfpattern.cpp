#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "enter the val of n--";
    cin >> n;
    cout << "NUMERIC  HALF PYRAMID--\n";
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << (col + 1) << " ";
        }
        cout << endl;
    }
    cout << "NUMERIC inverted HALF PYRAMID--\n";
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row; col++)
        {
            cout << (col + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}