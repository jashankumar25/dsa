#include <iostream>
#include <cmath>
using namespace std;

int main()
{ //-hollow traingle
    int length, width;
    cout << "enter the length.-";
    cin >> length;

    cout << "enter the width.--";
    cin >> width;
    for (int row = 0; row < length; row++)
    { //-inner
        for (int col = 0; col < width; col++)
        {
            if (row == 0 || row == length - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == width - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    //-hollow square
    int side;
    cout << "enter the side of square.-";
    cin >> side;

    //  1.
    for (int row = 0; row < side; row++)
    { //-inner
        for (int col = 0; col < side; col++)
        {
            if (row == 0 || row == side - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == side - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        //-ye main bhul jata hu
        cout << endl;
    }
    // 2.diagonal elements print
    for (int r = 0; r < side; r++)
    {
        for (int c = 0; c < side; c++)
        {
            if (r == 0 || c == 0 || r == side - 1 || c == side - 1 || r == c)
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