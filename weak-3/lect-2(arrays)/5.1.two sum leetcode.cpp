#include <iostream>
#include <vector> // Required for vector
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Return early on finding the first pair
            }
        }
    }
    return ans; // Empty if no such pair exists
}

int main() {
    vector<int> arr = {10, 50, 20, 15, 30};
    int target = 70;

    vector<int> result = twoSum(arr, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " + " << arr[result[1]] << " = " << target << endl;
    } else {
        cout << "No pair found with sum " << target << endl;
    }

    return 0;
}
