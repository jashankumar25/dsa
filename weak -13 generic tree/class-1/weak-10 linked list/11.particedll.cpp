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

void insertathead(int value, node *&head, node *&tail)
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
        head->prev = newnode;

        head = newnode;
    }
}

void insertionattail(int value, node *&head, node *&tail)
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

        tail->next = newnode;
        newnode->prev = tail;

        tail = newnode;
    }
}

int getlength(node *head)
{
    node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertionatposition(int pos, int value, node *&head, node *&tail)
{
    int length = getlength(head);

    if (pos == 1)
    {
        insertathead(value, head, tail);
    }
    else if (pos == length + 1)
    {
        insertionattail(value, head, tail);
    }
    else
    {
        node *temp = head;

        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }

        node *curr = temp->next;
        node *newnode = new node(value);

        temp->next = newnode;
        newnode->prev = temp;

        newnode->next = curr;
        curr->prev = newnode;
    }
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    delete temp;
}

void printreverse(node *tail)
{
    node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    delete temp;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    // insertathead(30, head, tail);
    // print(head);
    // insertathead(20, head, tail);
    // print(head);
    // insertathead(10, head, tail);
    // print(head);
    insertionattail(100, head, tail);
    print(head);
    insertionattail(200, head, tail);
    print(head);
    insertionattail(300, head, tail);
    print(head);

    insertionatposition(1, 40, head, tail);
    print(head);
    insertionatposition(3, 90, head, tail);
    print(head);
    insertionatposition(6, 50, head, tail);
    print(head);

    cout << "reverse a linked list" << endl;
    printreverse(tail);
    return 0;
}