
// https://leetcode.com/problems/sum-root-to-leaf-numbers/
class Solution
{
public:
    int solve(TreeNode *root, int current)
    {

        if (root == NULL)
            return 0;

        current = current * 10 + root->val;

        if (root->left == NULL && root->right == NULL)
            return current;

        return solve(root->left, current) + solve(root->right, current);
    }

    int sumNumbers(TreeNode *root)
    {
        return solve(root, 0);
    }
};