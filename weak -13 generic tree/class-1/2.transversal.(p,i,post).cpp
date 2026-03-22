#include <iostream>
#include <queue>
using namespace std;

// Node class represents each node of the tree
class Node
{
public:
    int data;    // value of node
    Node *left;  // pointer to left child
    Node *right; // pointer to right child

    // Constructor to initialize node
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to create tree recursively
Node *createTree()
{
    int value;
    // cout << "Enter value (-1 for NULL): ";
    cin >> value;

    // Base condition
    if (value == -1)
        return nullptr;

    // Create new node
    Node *root = new Node(value);

    // Recursively create left subtree
    // cout << "Adding left child of " << value << endl;
    root->left = createTree();

    // Recursively create right subtree
    // cout << "Adding right child of " << value << endl;
    root->right = createTree();

    return root;
}

// Preorder Traversal (NLR)
void preorder(Node *root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal (LNR)
void inorder(Node *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder Traversal (LRN)
void postorder(Node *root)
{
    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// level wise order--
// --=>left to right  ---=>right to left ---- =>zig -zag
void levelwiseorder(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> q;

    // initial state maintain
    q.push(root);
    q.push(nullptr); // Level separator

    // logic-->>steps A,B,C
    while (!q.empty())
    {
        // queue se nikalo-A
        Node *front = q.front();
        q.pop(); // pop first

        if (front == nullptr)
        { // iska matlab ,current level complete hogya h..
            cout << endl;
            if (!q.empty()) // due ot avoid a infinfite loops
                q.push(nullptr);
        }
        else
        {

            // fer tum print karolo-B
            cout << front->data << " ";

            // iske baache khalo-C
            if (front->left != nullptr)
                q.push(front->left);
            if (front->right != nullptr)
                q.push(front->right);
        }
    }
}
int main()
{
    // Create tree
    Node *root;
    root = createTree();

    // If tree is empty
    if (root == nullptr)
    {
        cout << "Tree is empty!" << endl;
        return 0;
    }
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\nPostorder Traversal: ";
    postorder(root);

    cout << "\nLevel Order Traversal: ";
    levelwiseorder(root);

    return 0;
}