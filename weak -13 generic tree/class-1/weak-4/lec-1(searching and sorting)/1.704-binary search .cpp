#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2; // ✅ Better way to avoid potential overflow
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] < target)
        {
            // right me jao
            s = mid + 1;
        }
        else if (nums[mid] > target)
        {
            // left me jao
            e = mid - 1;
        }
        // ye main bhul jata hu
        // mid = (s + e) / 2;
    }
    // agar main yaha pohoch gaya
    //  iska matlab elem -nah mila
    //  -means -not found
    return -1;
}
int main()
{
    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int ans = search(nums, target);

    if (ans != -1)
        cout << "Value found at index: " << ans << endl;
    else
        cout << "Value not found!" << endl;

    return 0;
}