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
int getlength(node *head)
{
    node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void delectionhead(int pos, node *&head, node *&tail)
{
    int len = getlength(head);
    if (head == NULL && tail == NULL)
    {
        cout << "List is empty, nothing to delete" << endl;
        return;
    }
    if (head == tail)
    {
        node *temp = head;

        head = NULL;
        tail = NULL;

        delete temp;
        return;
    }
    if (pos == 1) // we want to delete head
    {
        node *temp = head;
        head = head->next;

        head->prev = NULL;
        temp->next = NULL;

        delete temp;
        return;
    }

    if (pos == len)
    {
        node *temp = tail;

        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;

        delete temp;
        return;
    }

    // we want to delete  other than head

    node *temp = head;

    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
    }

    node *curr = temp->next;
    node *forward = curr->next;

    temp->next = curr->next;
    forward->prev = temp;

    curr->next = NULL;
    curr->prev = NULL;
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

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertathead(30, head, tail);
    insertathead(20, head, tail);
    insertathead(10, head, tail);
    insertathead(300, head, tail);

    print(head);

    delectionhead(1, head, tail);
    print(head);

    delectionhead(2, head, tail);
    print(head);

    delectionhead(2, head, tail);
    print(head);

    return 0;
}