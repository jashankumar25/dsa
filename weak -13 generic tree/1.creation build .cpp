#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
node *buildTree(node *root)
{
    cout << "\nEnter node value (-1 for NULL): ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter left child of " << data << " : " << endl;
    root->left = buildTree(root->left);

    cout << "Enter right child of " << data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTransversal(node *root) // breath first
{

    queue<node *> q;

    q.push(root);
    q.push(nullptr); // level separator
    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == nullptr)
        {
            // purana level complete trransverse ho gaya hai.
            cout << endl;
            if (!q.empty()) // queue has some child nodes
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void preorderTransversal(node *root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorderTransversal(root->left);
    preorderTransversal(root->right);
}

void inorderTransversal(node *root)
{
    if (root == nullptr)
        return;

    inorderTransversal(root->left);
    cout << root->data << " ";
    inorderTransversal(root->right);
}

void postoderTransversal(node *root)
{
    if (root == nullptr)
        return;

    postoderTransversal(root->left);
    postoderTransversal(root->right);
    cout << root->data << " ";
}

void buildtreefromlevel(node *&root)
{
    queue<node *> q;

    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter left node for:" << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter right node for:" << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1

    // creating a tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //  level order
    cout << "\nLevel Order Traversal of the Tree:\n";
    levelOrderTransversal(root);

    //-method -2
    buildtreefromlevel(root);
    //  pre order
    cout << "\npre Order Traversal of the Tree:\n";
    preorderTransversal(root);

    //  in order
    cout << "\ninOrder Traversal of the Tree:\n";
    inorderTransversal(root);

    //   post order
    cout << "\npost Order Traversal of the Tree:\n";
    postoderTransversal(root);

    return 0;
}

/*
==============================================================
DIFFERENCE BETWEEN TWO WAYS OF BUILDING A BINARY TREE
==============================================================

1) Recursive Tree Build (buildTree function)

• Method Used:
  Uses RECURSION

• Traversal Type:
  Depth First Search (DFS)

• Input Order:
  Preorder format
  Root → Left → Right

• Input Example:
  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

• Data Structure Used:
  Recursion stack (function call stack)

• Working:
  First creates root
  Then recursively builds LEFT subtree
  Then recursively builds RIGHT subtree

• Code Type:
  Shorter and easier to write


--------------------------------------------------------------

2) Level Order Tree Build (buildtreefromlevel function)

• Method Used:
  Iterative method using QUEUE

• Traversal Type:
  Breadth First Search (BFS)

• Input Order:
  Level by level input

• Input Example:

  Enter root: 1
  Enter left of 1: 3
  Enter right of 1: 5
  Enter left of 3: 7
  Enter right of 3: 11
  Enter left of 5: 17
  Enter right of 5: -1

• Data Structure Used:
  Queue

• Working:
  Insert root in queue
  Take node from queue
  Ask for its left child
  Ask for its right child
  Push children back into queue

• Code Type:
  Slightly longer because queue operations are used


--------------------------------------------------------------

Both methods create the same tree structure

Example Tree:

        1
      /   \
     3     5
    / \   /
   7  11 17

Time Complexity of both methods:
O(n)

because each node is processed once.

==============================================================
*/