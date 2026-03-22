
// https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution
{
public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node *root)
    {
        // write code here
        if (root == nullptr)
            return 0;

        int count = 0;

        int left = countLeaves(root->left);
        int right = countLeaves(root->right);

        if (root->left == nullptr && root->right == nullptr)
            return 1;

        return left + right;
    }
};