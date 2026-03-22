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
// https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/1931119867/?utm=codolio
class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> s;
        preorder(root, s);
        return s;
    }
    void preorder(TreeNode *root, vector<int> &s)
    {
        if (root == nullptr)
            return;

        s.push_back(root->val);

        preorder(root->left, s);
        preorder(root->right, s);
    }
};