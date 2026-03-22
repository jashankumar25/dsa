#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "enter the val of n--";
    cin >> num;

    int n = num / 2;

    cout << "DIAMOND\n";
    for (int row = 0; row < n; row++)
    { // spaces and star
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    { // spaces and star
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        //-star
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}