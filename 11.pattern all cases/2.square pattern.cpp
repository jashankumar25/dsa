#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //-sq-pattern
    // total rows-4
    // every rows -> print 4 star

    //-outer lop->4 rows

    cout << "square pattern" << endl;
    for (int row = 0; row < 4; row++)     // outer loop-rows
    {                                     //-inner loop -> 4 star print
                                          //-hr row me kya krna hsai,vo inner loop batega.
        for (int col = 0; col < 4; col++) // inner loop-col
        {
            // hr 1 single column me,1 star rakha hai..
            cout << "* ";
        }
        // 4 -star print karane ke badd, next line me aata hai
        cout << endl;
    }

    return 0;
}