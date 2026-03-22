#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
node *insertathead(int value, node *&head, node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        node *newnode = new node(value);
        head = newnode;
        tail = newnode;
    }
    else
    {
        node *newnode = new node(value);
        newnode->next = head;
        head = newnode;
    }
    return head;
}

void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
// homework->exact postion return karo..jaha par  mila..
int search(int target, node *head)
{
    node *temp = head;
    int len = 1;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return len;
        }
        len++;
        temp = temp->next;
    }
    // iska matlab puri ll transerve ho gayi hai
    // target nhi mila -return false
    return -1;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertathead(10, head, tail); // 10->null
    insertathead(20, head, tail); // 20->10->null
    insertathead(30, head, tail); // 30->20->10->null
    print(head);

    int pos = search(10, head);
    if (pos != -1)
        cout << "Element found at position = " << pos << endl;
    else
        cout << "Element not found" << endl;
}