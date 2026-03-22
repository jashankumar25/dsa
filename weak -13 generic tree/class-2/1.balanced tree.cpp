
// https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1?utm=codolio
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

int getheight(Node *root)
{
    if (root == nullptr)
        return 0;

    return 1 + max(getheight(root->left), getheight(root->right));
}
class Solution
{
public:
    bool isBalanced(Node *root)
    {
        // code here
        if (root == nullptr)
            return true;

        if (abs(getheight(root->left) - getheight(root->right)) > 1)
            return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};