#include <iostream>
using namespace std;
class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int value)
    {
        this->prev = NULL;
        this->data = value;
        this->next = NULL;
    }
};

void insertattail(int val, node *&head, node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        node *newnode = new node(val);
        head = newnode;
        tail = newnode;
    }
    else
    {
        node *newnode = new node(val);
        // tail node connnect with newnode
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
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

void reverse(node *tail)
{
    node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertattail(100, head, tail);
    print(head);
    insertattail(200, head, tail);
    print(head);
    insertattail(300, head, tail);
    print(head);
    cout << "reverse a linked list" << endl;
    reverse(tail);
    return 0;
}