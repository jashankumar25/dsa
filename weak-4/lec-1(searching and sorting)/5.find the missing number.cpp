#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int ansindex = -1;
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        int number = arr[mid];
        int index = mid;
        int diff = number - index;

        if (diff == 0)
        {
            s = mid + 1; // go right
        }
        else if (diff == 1)
        {
            ansindex = index; // store and go left
            e = mid - 1;
        }
    }
    // ye mujhse galat hogya hai.
    // for extreme right missing case.
    //   hardcoding the logic
    if (ansindex == -1)
    {
        return n; // all matched, missing is at the end
    }
    return ansindex;
}



int main()
{
    vector<int> nums = {0, 1, 2, 3, 5}; // Change this to test other inputs
    cout << "Missing number is: " << missingNumber(nums) << endl;
    return 0;
}
