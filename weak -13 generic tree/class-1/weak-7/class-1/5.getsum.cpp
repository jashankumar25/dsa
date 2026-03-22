#include <iostream>
using namespace std;

int getsum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int finans = n + getsum(n - 1);
    return finans;
}

int main()
{
    int n;
    cout << "Enter the val up to sum = ";
    cin >> n;

    int ans = getsum(n);
    cout << "The sum from 1 to " << n << " = " << ans << endl;

    return 0;
}
