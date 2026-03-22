/*Given a sorted array arr[] of size N, some elements of array are
moved to either of the adjacent positions, Le., arr[il may be
present at arr[i+1] or arr[i-il i.e. arr[i] can only be swapped
with either arr[i+1] or arr[i-1]. The task is to search for an
element in this array. */

// Input: arr[]={18, 3, 40, 20, 50, 80, 70}  key = 40
// Output: 2
// Explanation: Output is index of 40 in given array Le. 2

// Input: arr[]={18, 3, 40, 20, 50, 80, 70}  key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present

#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector<int> &arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
            return mid;
        if (mid + 1 <= e && arr[mid + 1] == key)
            return mid + 1;
        if (mid - 1 >= s && arr[mid - 1] == key)
            return mid - 1;

        if (arr[mid] < key)
            s = mid + 2; // right
        else
            e = mid - 2; // left
    }
    return -1;
}

int main()
{
    vector<int> arr = {18, 3, 40, 20, 50, 80, 70};
    int n = arr.size();
    int key = 20;

    int ansindex = linear_search(arr, n, key);
    cout << "M-1 key present at index=" << ansindex << endl;

    int ans = binary_search(arr, n, key);
    cout << " M-2 key present at index=" << ans;
}