// https://leetcode.com/problems/path-sum-ii/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
void solve(TreeNode *root, int targetSum, int sum, vector<vector<int>> &result,
           vector<int> &path)
{

    if (root == nullptr)
        return;

    sum += root->val;
    path.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr)
    {
        if (sum == targetSum)
        {
            result.push_back(path);
        }
        path.pop_back();
        return;
    }

    solve(root->left, targetSum, sum, result, path);
    solve(root->right, targetSum, sum, result, path);

    path.pop_back();
}
class Solution
{
public:
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> result;
        vector<int> path;
        int sum = 0;
        solve(root, targetSum, sum, result, path);
        return result;
    }
};