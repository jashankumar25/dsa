#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    Node *createTree()
    {
        cout << "enter the val for node=" << endl;
        int value;
        cin >> value;

        if (value == -1)
        {
            return NULL; // INVALID VALUE
        }
        else
        {
            // VALID hai tu node tree karo.. VALUE
            Node *root = new Node(value);
            // 1 case maine karilya ,baaki land right rec deekh lega
            cout << "Adding left child for " << value << endl;
            root->left = createTree();
            cout << "Adding right child for " << value << endl;
            root->right = createTree();
            return root;
        }
    }
};

int main()
{
    Node *root = NULL;

    Node obj(0);             // Temporary object
    root = obj.createTree(); // Correct way

    /* Why we created Node obj(0)?
        Because createTree() is non-static.
        To call non-static functions, we need an object.*/

    if (root != NULL)
        cout << "Printing root: " << root->data << endl;

    return 0;
}