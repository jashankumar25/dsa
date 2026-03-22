#include <iostream>
using namespace std;

void findFirstOccurrence(int arr[], int n, int &firstIndex, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found- may or may be first occurence
            firstIndex = mid; // store and compute.
            // kyoki first occurence ki batt  hori hai.
            //  toh ham left me  jayega ga..
            e = mid - 1; // move left to find first occurrence
        }
        else if (arr[mid] < target)
        { // right me jau..
            s = mid + 1;
        }
        else if (arr[mid] > target)
        { // left me jau..
            e = mid - 1;
        }
        // ye main bhul jata hu..
        mid = s + (e - s) / 2;
    }
}
void findLastOccurrence(int arr[], int n, int &lastIndex, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        { // target  k equal toh hai
            // but may or may noyt be last occurence
            // store and compute
            lastIndex = mid;
            s = mid + 1; // right me jao
        }
        else if (arr[mid] < target)
        {
            s = mid + 1; // right me jao
        }
        else if (arr[mid] > target)
        {
            e = mid - 1; // left me jao
        }
        // ye main bhul jata hu..
        mid = s + (e - s) / 2;
    }
}
int main()
{
    int arr[] = {5, 10, 20, 20, 20, 20, 20, 30, 60, 60, 60};
    int n = 11;
    int target = 600;
    int firstIndex = -1;
    int lastIndex = -1; //-1 means not found

    //--binary search lagna jara har hai.. toh array sorted hi hoga
    findFirstOccurrence(arr, n, firstIndex, target);

    //--binary search lagna jara har hai.. toh array sorted hi hoga
    findLastOccurrence(arr, n, lastIndex, target);

    if (firstIndex != -1 && lastIndex != -1)
    {
        cout << "First occurrence index = " << firstIndex << endl;
        cout << "Last occurrence index = " << lastIndex << endl;
        cout << "Total occurrences = " << (lastIndex - firstIndex + 1) << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }
    return 0;
}
