#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {11, 45, 2, 96, 5, 21};
    int n = arr.size();

    cout << "Original array: ";
    print(arr, n);

    bubblesort(arr, n);

    cout << "Sorted array: ";
    print(arr, n);

    return 0;
}
