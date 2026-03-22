#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[], int size)
{
    int maxAns = INT_MIN; // arr[0]==int_min;
    for (int i = 0; i < size; i++)
    {
        // maxAns=max(maxAns,arr[i]);
        if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
    }
    cout << "MAX ELEMENT-" << maxAns << endl;
}
void findMin(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // minAns=min(minAns,arr[i]);
        if (minAns > arr[i])
        {
            minAns = arr[i];
        }
    }
    cout << "Min ELEMENT-" << minAns << endl;
}

int main()
{
    int arr[150];
    int size;

    cout << "enter the val of size of array-";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the val of index" << i << endl;
        cin >> arr[i];
    }
    findMax(arr, size);
    findMin(arr, size);
}