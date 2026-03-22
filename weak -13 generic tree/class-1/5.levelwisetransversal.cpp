#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node *createTree()
{
    int value;
    cin >> value;

    if (value == -1)
        return nullptr;

    Node *root = new Node(value);

    root->left = createTree();
    root->right = createTree();
    return root;
}

void levelwiseorder(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> q;

    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == nullptr)
        {
            cout << endl;
            if (!q.empty())
                q.push(nullptr);
        }
        else
        {
            cout << front->data << " ";
            if (front->right != nullptr)
                q.push(front->right);
            if (front->left != nullptr)
                q.push(front->left);
        }
    }
}
int main()
{

    Node *root;
    root = createTree();

    if (root == nullptr)
    {
        cout << "Tree is empty!" << endl;
        return 0;
    }
    // 10 50 40 -1 -1 -1 30 20 -1 -1 -1
    cout << "\nLevel Order Traversal: ";
    levelwiseorder(root);

    return 0;
}