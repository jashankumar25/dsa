#include <iostream>
using namespace std;

double mySqrt(int x)
{
    int s = 0;
    int e = x;
    int ansInteger = -1;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        if (mid * mid == x)
        {
            return mid;
        }

        else if (mid * mid > x)
        {
            e = mid - 1;
        }
        else if (mid * mid < x)
        {                     // may or may not be
            ansInteger = mid; // store and compute
            s = mid + 1;      // go right to find or jada pass ka answer
        }
    }
    // return ansInteger;
    double sqrtans = (double)ansInteger;

    // precision upto how many digits
    int precision;
    cout << " enter the precision upto how many digits-";
    cin >> precision;

    double factor = 1;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (int n = 0; n <= 9; n++)
        {
            if ((sqrtans + n * factor) * (sqrtans + n * factor) > x)
            {
                sqrtans = sqrtans + (n - 1) * factor;
                break;
            }
        }
    }

    return sqrtans;
}
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    double result = mySqrt(x);
    cout << "Square root of " << x << " with precision is: " << result << endl;
    return 0;
}