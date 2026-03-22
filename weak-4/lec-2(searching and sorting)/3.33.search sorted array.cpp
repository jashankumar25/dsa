#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr)
{
    int n = arr.size();
    int pivotIndex = -1;

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid + 1 < n && arr[mid] > arr[mid + 1])
            return mid;

        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
            return mid - 1;

        // If only one element is left
        if (s == e)
            return s;

        // kab left or kab right
        if (arr[s] > arr[mid])
        {
            e = mid -1;
        }
        else
        {
            s = mid - 1;
        }
    }
    return pivotIndex;
}
int binarysearch(vector<int> &arr, int s, int e, int target)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int searcharray(vector<int> &arr, int target)
{
    int n = arr.size();
    int pivot = findPivotIndex(arr);

    // line-A  ->index = 0-->pivotindex
    // line-b   >index =pivotindex+1->n-1

    if (target >= arr[0] && target <= arr[pivot]) // Target in left half
    {
        return binarysearch(arr, 0, pivot, target);
    }
    else // Target in right half
    {
        return binarysearch(arr, pivot + 1, n - 1, target);
    }
    // return -1;

    // Case when array is not rotated
    if (pivot == -1)
    {
        return binarysearch(arr, 0, n - 1, target);
    }
}
int main()
{
    vector<int> arr = {6, 5, 10, 0, 1, 2, 4};
    int target = 4;
    int ans = searcharray(arr, target);
    if (ans != -1)
        cout << "Target found at index: " << ans << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}