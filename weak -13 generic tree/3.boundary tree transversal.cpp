
// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
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

class Solution
{
public:
    // Traverse left boundary (excluding leaf nodes)
    void traversalLeft(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;

        ans.push_back(root->data);

        if (root->left)
            traversalLeft(root->left, ans);
        else
            traversalLeft(root->right, ans);
    }

    // Traverse all leaf nodes
    void transversalleaf(Node *root, vector<int> &ans)
    {
        // base case

        if (root == nullptr)
            return;

        if (root->left == nullptr && root->right == nullptr)
        {
            ans.push_back(root->data);
            return;
        }

        transversalleaf(root->left, ans);
        transversalleaf(root->right, ans);
    }

    // Traverse right boundary (excluding leaf nodes)
    void righttransversal(Node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;

        if (root->right)
            righttransversal(root->right, ans);
        else
            righttransversal(root->left, ans);

        // wapas  aayge
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root)
    {
        vector<int> ans;

        if (root == nullptr)
            return ans;

        ans.push_back(root->data);

        // step-1-left part print/store
        traversalLeft(root->left, ans);

        // steps-2
        // a)transverse -leaf nodes of left subtree
        transversalleaf(root->left, ans);

        // a)transverse -leaf nodes of right subtree
        transversalleaf(root->right, ans);

        // steps-3 -right part print in the reverse order
        righttransversal(root->right, ans);
        return ans;
    }
};