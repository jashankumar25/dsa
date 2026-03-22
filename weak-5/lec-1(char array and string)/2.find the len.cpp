#include <iostream>
using namespace std;

// Method 1: Using while loop
int find_length_while(char arr[])
{
    int count = 0;
    int index = 0;

    while (arr[index] != '\0')
    {
        // jab tak array me null char nahi milta
        // tab tak increment karo
        // and aage bago..
        count++;
        index++;
    }
    return count;
}

// Method 2: Using for loop
int find_length_for(char arr[], int size)
{
    int count = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char arr[100];

    cout << "Enter your name: ";
    // Input full line
    cin.getline(arr, 100);

    int len1 = find_length_while(arr);
    cout << "Length using while loop = " << len1 << endl;

    int len2 = find_length_for(arr, 100);
    cout << "Length using for loop = " << len2 << endl;

    return 0;
}
