#include <iostream>
using namespace std;

int fibonaci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int finans = fibonaci(n - 1) + fibonaci(n - 2);
    return finans;
}

int main()
{
    int n;
    cout << "Enter the value up to n = ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonaci(i) << " ";
    }
    cout << endl;

    return 0;
}
