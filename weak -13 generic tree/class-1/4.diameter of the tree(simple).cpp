// https://leetcode.com/problems/diameter-of-binary-tree/

// The diameter of a binary tree is the length of the longest path between any
// two nodes in a tree. This path may or may not pass through the root.
class Solution
{
public:
    int getHeight(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int leftTree = getHeight(root->left);
        int rightTree = getHeight(root->right);

        return 1 + max(leftTree, rightTree);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int leftsubtree = diameterOfBinaryTree(root->left);
        int rightsubtree = diameterOfBinaryTree(root->right);

        int combined = getHeight(root->left) + getHeight(root->right);

        return max(leftsubtree, max(rightsubtree, combined));
    }
};
// t(c)=O(n²)