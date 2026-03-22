#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //-half pyramid
    int n;
    cout << "enter the val of n:";
    cin >> n;

    cout << "1. half pyramid" << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++) //-condn-col<=row
        {
            cout << "* ";
        }
        cout << endl;
    }

    //-inverted pyramid
    cout << "2.inverted pyramid" << endl;
    for (int row = 0; row < n; row++)
    {
        // for(int c=5;c>r;c--)
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "3.hallow half pyramid." << endl;
    for (int row = 0; row < n; row++)
    {
        int totalCol = row + 1;
        for (int col = 0; col < totalCol; col++)
        {
            if (row == 0 || row == n - 1 || row == 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == totalCol - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            } /*
            if(  row == 0||row==n-1||col==0||col==row)

            {
             cout<<"* ";
            }
            else{
              cout<<"  ";
              }


         }*/
        }
        cout << endl;
    }

    cout << "4.inverted pyramid" << endl;
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
    cout << "4.inverted pyramid method-2" << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || col + row == n - 1)
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