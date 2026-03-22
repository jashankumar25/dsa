#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end])
            return false;
        else
        {
            start++;
            end--;
        }
    }
    return true; // valid palindrome
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] == s[j]) // same
        {
            i++;
            j--;
        }
        else // different
        {    // is case me character delete krke dekho
             // 2 options ha
             // delete one character (i or j) and check
            bool ansOne = checkPalindrome(s, i + 1, j);
            bool ansTwo = checkPalindrome(s, i, j - 1);
            return ansOne || ansTwo;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    if (validPalindrome(s))
        cout << "Yes, valid palindrome (after at most one deletion)." << endl;
    else
        cout << "No, not a valid palindrome." << endl;

    return 0;
}
