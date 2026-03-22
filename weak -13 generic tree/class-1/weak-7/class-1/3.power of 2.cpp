#include <iostream>
using namespace std;

int powerOfTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int finalans = 2 * powerOfTwo(n - 1);
    return finalans;
}
int main()
{
    int n;
    cout << "Enter the exponent value (n): ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = powerOfTwo(n);
    cout << "2 raised to the power " << n << " is: " << result << endl;

    return 0;
}