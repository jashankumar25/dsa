#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int findPivotIndex(vector<int> &arr)
{
    int maxValue = INT_MIN;
    int pivotIndex = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
            pivotIndex = i;
        }
    }
    return pivotIndex;
}
int findPivotIndex2(vector<int> &arr)
{
    int n = arr.size();
    int pivotIndex = -1;

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid < n - 1 && arr[mid] > arr[mid + 1])
            return mid;

        if (mid > 0 && arr[mid] < arr[mid - 1])
            return mid - 1;

        if (s == e)
            return s;

        if (arr[s] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return pivotIndex;
}
int main()
{
    vector<int> arr = {6, 5, 10, 0, 1, 2, 4};

    int pivot = findPivotIndex(arr);
    cout << "Pivot index (maximum element) = " << pivot << endl;

    int pivot2 = findPivotIndex2(arr);
    cout << "Pivot index (maximum element) = " << pivot2 << endl;
}