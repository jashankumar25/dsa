#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Original array: ";
    print(arr, size);

    solve(arr, size);

    cout << "Modified array: ";
    print(arr, size); // Print updated array

    return 0;
}
