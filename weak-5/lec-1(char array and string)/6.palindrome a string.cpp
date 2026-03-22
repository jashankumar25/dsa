#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char arr[], int len)
{
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false; // not a palindrome
        }
    }
    // agar main yha tak aaya
    // iska matlab saare char check ho chuke h
    // and different character nahi mila
    // iska matlab valid palidrome-> return true
    return true;
}

int main()
{
    char arr[100];

    cout << "Enter your string: ";
    cin >> arr;

    int len = strlen(arr);

    bool ans = palindrome(arr, len);

    if (ans)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is NOT a palindrome." << endl;

    return 0;
}
