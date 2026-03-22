#include <iostream>
#include <string>
using namespace std;

// return count of palindrome substrings
// using i and j center and expanding aroung it in every it, if possible
int expandAroundCenter(const string &s, int i, int j)
{
    int count = 0;
    int n=s.length();
    while (i >= 0 && j < n && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s)
{
    int totalCount = 0;
    int n=s.length();
    for (int center = 0; center < n; center++)
    {
        // odd
        int i = center;
        int j = center;
        int oddPalindromeStrCount = expandAroundCenter(s, i, j);

        // even
        i = center;
        j = center + 1;
        int evenPalindromeStrCount = expandAroundCenter(s, i, j);

        totalCount = totalCount + oddPalindromeStrCount + evenPalindromeStrCount;
    }
    return totalCount;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countSubstrings(s);
    cout << "Total palindromic substrings: " << result << endl;

    return 0;
}
