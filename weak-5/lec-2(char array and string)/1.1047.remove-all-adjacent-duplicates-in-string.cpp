#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    string ans = ""; // intialise ans string as empty str
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        char currCharacter = s[i];

        if (ans.empty())
        {
            // if ans is empty,,seedha push karo
            ans.push_back(currCharacter);
        }
        // rightmost character of ans=ans.back()
        else if (currCharacter == ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(currCharacter);
        }
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = removeDuplicates(s);
    cout << "After removing adjacent duplicates: " << result << endl;

    return 0;
}