#include <iostream>
#include <climits>

using namespace std;

// Returns the first pair found that sums up to target
pair<int, int> findFirstMatchingPair(int arr[], int size, int target)
{
    // assuming (-1,-1)- as no answer found
    pair<int, int> ans = make_pair(-1, -1);

    // check all pairs.
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // return the same element twice (e.g., arr[i] == arr[j])
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    // agar aap yah tak pohoch gaye
    // iska matlab ,koi bhi pair target ke equal nhi mila
    // return false kar do..
    return ans;
}

// Stores the first matching pair in an array
void storeFirstMatchingPair(int arr[], int size, int target, int result[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                result[0] = arr[i];
                result[1] = arr[j];
                return;
            }
        }
    }
}

// Prints all pairs that sum up to the target
void printAllMatchingPairs(int arr[], int size, int target)
{
    cout << "All possible cases:" << endl;
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No matching pairs found." << endl;
    }
}

int main()
{
    int arr[] = {10, 50, 20, 15, 30};
    int size = 5;
    int target = 70;

    // ✅ Method 1: using pair
    pair<int, int> ans = findFirstMatchingPair(arr, size, target);
    if (ans.first == -1 && ans.second == -1)
    {
        cout << "No pairs found (via pair)" << endl;
    }
    else
    {
        cout << "Pair found (via pair): " << ans.first << ", " << ans.second << endl;
    }

    // ✅ Method 2: using array
    int result[2] = {INT_MIN, INT_MAX};
    storeFirstMatchingPair(arr, size, target, result);
    if (result[0] == INT_MIN && result[1] == INT16_MAX)
    {
        cout << "No pairs found (via array)" << endl;
    }
    else
    {
        cout << "Pair found (via array): " << result[0] << ", " << result[1] << endl;
    }
    // ✅ Method 3: Print all matching pairs

    printAllMatchingPairs(arr, size, target);
}
