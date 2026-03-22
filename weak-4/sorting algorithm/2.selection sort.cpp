#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void selectionsort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;               // ith element hi smallest hai
        for (int j = i + 1; j < n; j++) // j<=n-1// n-included
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
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

    selectionsort(arr, n);

    cout << "Sorted array: ";
    print(arr, n);

    return 0;
}
