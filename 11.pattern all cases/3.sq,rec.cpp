#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side;
    cout << "enter the val of side .--";
    cin >> side;
    cout << "square pattern" << endl;
    for (int row = 0; row < side; row++) // outer loop-row
    {
        for (int col = 0; col < side; col++) // inner loop-col
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "---rectangle pattern" << endl;
    int length, width;
    cout << "enter the length.-";
    cin >> length;
    cout << "enter the width.--";
    cin >> width;

    for (int r = 0; r < length; r++) // outer loop
    {
        for (int c = 0; c < width; c++) // inner loop
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}