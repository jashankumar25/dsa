// https://leetcode.com/problems/balanced-binary-tree/
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
class Solution
{
public:
    int getheight(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int left = getheight(root->left);
        int right = getheight(root->right);
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return true;

        int leftheight = getheight(root->left);
        int rightheight = getheight(root->right);
        if (abs(leftheight - rightheight) > 1)
            return false;

        int leftsubtree = isBalanced(root->left);
        int rightsubtree = isBalanced(root->right);
        return leftsubtree && rightsubtree;
    }
};