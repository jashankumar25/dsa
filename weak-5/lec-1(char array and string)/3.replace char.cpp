#include <iostream>
using namespace std;

void replace_char(char originalchar, char newchar, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == originalchar)
        {
            arr[i] = newchar;
        }
    }
}
int main()
{
    char arr[100];

    cout << "enter your string=";
    cin.getline(arr, 100);

    replace_char('@', ' ', arr, 100);
    cout << " replace char=" << arr << endl;

    return 0;
}