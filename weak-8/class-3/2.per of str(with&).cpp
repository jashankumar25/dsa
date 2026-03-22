#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>>& ans, vector<int>& nums, int i) {
    int n = nums.size();

    // base case: if all positions are fixed
    if (i == n-1) {
        ans.push_back(nums);
        return;
    }

    // try every choice at position i
    for (int j = i; j < n; j++) {
        swap(nums[i], nums[j]);         
        backtrack(ans, nums, i + 1);     
        swap(nums[i], nums[j]);          // undo (backtrack)
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;

    backtrack(ans, nums, 0);

    cout << "Permutations of [1,2,3] are:\n";
    for (auto& v : ans) {
        cout << "[ ";
        for (int x : v) cout << x << " ";
        cout << "]\n";
    }
    return 0;
}
