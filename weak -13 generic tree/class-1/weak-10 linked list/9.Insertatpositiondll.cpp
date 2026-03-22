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
void insertathead(int val, node *&head, node *&tail)
{ // ll is empty
    if (head == NULL && tail == NULL)
    {
        node *newnode = new node(val);
        head = newnode;
        tail = newnode;
    }
    else
    {
        node *newnode = new node(val);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

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
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

int getlength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertionatposition(int pos, int val, node *&head, node *&tail)
{
    int len = getlength(head);
    if (pos == 1) // leftmost end
    {
        insertathead(val, head, tail);
    }
    else if (pos == len + 1) // rightmost end
    {
        insertattail(val, head, tail);
    }
    else
    { // middle me kise ka position
        node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        node *newnode = new node(val);
        // node *forward = temp->next;

        temp->next->prev = newnode;
        newnode->next = temp->next;

        newnode->prev = temp;
        temp->next = newnode;
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
    return -1;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertattail(10, head, tail);
    insertattail(20, head, tail);
    insertattail(30, head, tail);

    insertionatposition(1, 420, head, tail);
    print(head);
    insertionatposition(5, 620, head, tail);
    print(head);
    insertionatposition(4, 720, head, tail);
    print(head);

    int pos = search(30, head);
    if (pos != -1)
        cout << "Element found at position = " << pos << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}