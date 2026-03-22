#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
void counting(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    counting(n - 1);
}
int powerof2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int finalans = 2 * powerof2(n - 1);
    return finalans;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    int finalans = fibonacci(n - 1) + fibonacci(n - 2);
    return finalans;
}
int getsum(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int finalans = n + getsum(n - 1);
    return finalans;
}
int main()
{
    int n;
    cout << "enter the val of n=";
    cin >> n;
    if (n < 0)
    {
        cout << " cannot find" << endl;
    }

    int ans = factorial(n);
    cout << "factorial of " << n << " is: " << ans << endl;

    cout << "counting print :";
    counting(n);

    int p = powerof2(n);
    cout << "\npower  2 of " << n << " is: " << p << endl;

    int f = fibonacci(n);
    cout << "fibonaaci of " << n << " is: " << f << endl;

    int s = getsum(n);
    cout << "sum of 1 to " << n << " is: " << s << endl;

    return 0;
}