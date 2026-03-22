#include <bits/stdc++.h>
using namespace std;

void permutation(string str, int i)
{
    int n = str.length();
    if (i >= n - 1) // base case
    {
        cout << str << endl;
        return;
    }
    // 1 case me solve karuga ,baaki recussion solve karga lega
    // 1 case->main i wala daabe k upar hr ek element ko ek chance dunga

    for (int j = i; j < n; j++)
    { // chance dena k lyi ,swap kia tha
        swap(str[i], str[j]);
        // baki rec solve kar lega
        permutation(str, i + 1);
        //  backtrack
        // swap(str[i], str[j]);
    }
}
int main()
{
    string str = "abc";

    int i = 0;
    cout << "All permutations:\n";
    permutation(str, i);

    return 0;
}
