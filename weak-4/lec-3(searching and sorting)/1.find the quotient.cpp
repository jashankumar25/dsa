// Given two integers one is a dividend and the other is the
// divisor, we need to find the quotient when the dividend is divided
// by the divisor without the use of any and operators

// Input: dividend 10, divisor = 2
// Output: 5
// Explanation: 18/2 = 5.

// Input: dividend 10, divisor = 3
// Output: 3
// Explanation: 10/3 =3.33333 which is truncated to 3.

// Input: dividend 18, divisor = -2
// Output: -5
// Explanation: 18/-2=-5

#include <iostream>
using namespace std;
int getQuotient(int dividend, int divisior)
{
    // search space-> (-ve dividend -> +ve dividend)
    int s = 0;
    int e = dividend;
    int ansQuotient = -1;

    while (s <= e)
    {
        // int mid = s + (e - s) / 2;
        int mid = s + ((e - s) >> 1); // right-shift op- divide by 2 ki power shift val.
        if (divisior * mid == dividend)
        {
            return mid;
        }
        if (divisior * mid < dividend)
        {
            s = mid + 1;       // right
            ansQuotient = mid; // store and compute
        }
        else
        { // left
            e = mid - 1;
        }
    }
    return ansQuotient;
}
int main()
{
    int dividend = -50;
    int divisior = 4;

    // mission is to find the quotient
    int ans = getQuotient(abs(dividend), abs(divisior));

    if ((dividend > 0 && divisior < 0) || (dividend < 0 && divisior > 0))
    {
        ans = 0 - ans;
        cout << "Final quotient=" << ans << endl; // one is + and - and vice-versa
    }
    else
    {
        cout << "Final quotient=" << ans << endl; // both  positive and negative.
    }
    return 0;
}