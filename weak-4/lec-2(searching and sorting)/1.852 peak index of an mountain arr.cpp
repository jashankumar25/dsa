#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int max = INT_MIN;
    int maxIndex = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int peakIndexInMountainArray2(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    int ansIndex = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1; // move right
        }
        else
        {
            ansIndex = mid; // possible peak
            e = mid - 1;    // move left
        }
    }
    return ansIndex;
}
int peakIndexInMountainArray3(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1; // move right
        }
        else if (arr[mid] > arr[mid + 1])
        {            // move left or stay at mid
            e = mid; // ya toh m line-b par hu.
                     // ta toh main ans par hi hu..
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int main()
{
    vector<int> arr = {0, 10, 5, 2};

    // Method 1
    int val = peakIndexInMountainArray(arr);
    cout << "Peak value (Method 1): " << val << endl;

    // Method 2
    int peakIdx2 = peakIndexInMountainArray2(arr);
    if (peakIdx2 != -1)
        cout << "Peak value (Method 2): " << val << endl;
    else
        cout << "Peak not found (Method 2)" << endl;

    // Method 3
    int peakIdx3 = peakIndexInMountainArray3(arr);
    cout << "Peak index (Method 3): " << peakIdx3 << endl;

    return 0;
}