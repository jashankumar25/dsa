
#include <iostream>
using namespace std;

int main()
{

    int n = 4; //-num-8

    for (int row = 0; row < n; row++)
    { //-inverted py1
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        //-full pyramid 1
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }
        //-inverted py 2
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    { //-inverted py1
        for (int col = 0; col < 1 + row; col++)
        {
            cout << "* ";
        }
        //-full pyramid 1
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << "  ";
        }
        //-inverted py 2
        for (int col = 0; col < 1 + row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}