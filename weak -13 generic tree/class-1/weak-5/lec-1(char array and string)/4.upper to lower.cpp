#include <iostream>
#include <cstring> // for strlen()
using namespace std;

// Convert lowercase letters to uppercase
void convertIntoUpper(char arr[])
{
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

// Convert uppercase letters to lowercase
void convertIntoLower(char arr[])
{
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main()
{
    char arr[100];
    cout << "Enter your string: ";
    cin.getline(arr, 100);

    // convertIntoUpper(arr);  // Converts lowercase to UPPERCASE
    convertIntoLower(arr); // Converts uppercase to lowercase

    cout << "Converted string: " << arr << endl;

    return 0;
}
