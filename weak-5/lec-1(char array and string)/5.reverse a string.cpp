#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void reverseString(char arr[], int len)
{
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    char arr[100];
    cout << "enter  your name=";
    cin >> arr;

    int len = strlen(arr);

    cout << "Original char array: " << arr << endl;

    reverseString(arr, len);

    cout << "Reversed char array: " << arr << endl;

    return 0;
}