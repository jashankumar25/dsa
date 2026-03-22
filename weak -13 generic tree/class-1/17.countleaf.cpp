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
        if (root == nullptr)
            return 0;

        int count = 0;

        if (root->left == nullptr && root->right == nullptr)
        {
            count++;
        }

        return count + countLeaves(root->left) + countLeaves(root->right);
    }
};