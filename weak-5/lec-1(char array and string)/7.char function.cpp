#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr1[100];

    cout << "enter the input for arr1=";
    cin >> arr1;

    char arr2[100];

    cout << "enter the input for arr2=";
    cin >> arr2;

    cout << "find the len(arr1)=" << strlen(arr1) << endl;

    cout << "catenation=" << strcat(arr1, arr2) << endl;

    int result = strcmp(arr1, arr2);
    if (result == 0)
    {
        cout << "Both strings are equal." << endl;
    }
    else if (result > 0)
    {
        cout << "arr1 is greater than arr2." << endl;
    }
    else
    {
        cout << "arr1 is less than arr2." << endl;
    }
}