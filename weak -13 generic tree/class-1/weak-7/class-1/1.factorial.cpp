#include <iostream>
using namespace std;

int getFactorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1)
        return 1;

    // Recursive step: n * factorial of (n - 1)
    // Recussion solve-->getFactorial(n-1)
    int finalAns = n * getFactorial(n - 1);
    return finalAns;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return 0;
    }

    int ans = getFactorial(n);
    cout << "Factorial of " << n << " is: " << ans << endl;

    return 0;
}
