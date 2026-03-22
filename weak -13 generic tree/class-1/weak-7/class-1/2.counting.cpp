#include <iostream>
using namespace std;

// Print counting from n to 1(tail recussion)
void countDescending(int n)
{
    if (n == 1) // base case
    {
        cout << 1;
        return;
    }

    cout << n << " ";       // processing
    countDescending(n - 1); // recussive function.
}

// Print counting from 1 to n-(head recusion)
void countAscending(int n)
{
    if (n == 0) // base case
    {
        return;
    }

    countAscending(n - 1); // recussive function.
    cout << n << " ";      // processing
}

int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    cout << "Counting from " << n << " to 1 (Tail Recursion): ";
    countDescending(n);

    cout << "\nCounting from 1 to " << n << " (Head Recursion): ";
    countAscending(n);

    return 0;
}
