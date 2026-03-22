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
node *insertattail(int value, node *&head, node *&tail)
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
        tail = newnode;
    }
    return head;
}

node *insertatposition(int pos, int value, node *&head, node *&tail)
{
    int length = getlength(head);
    if (pos == 1) // insert at head
    {
        head = insertathead(value, head, tail);
    }
    else if (pos == length + 1) // insert at tail
    {
        head = insertattail(value, head, tail);
    }
    else
    {
        //
        node *temp = head;

        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        node *newnode = new node(value);
        newnode->next = temp->next;
        temp->next = newnode;
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

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertattail(10, head, tail);
    insertattail(20, head, tail);
    insertattail(30, head, tail);

    insertatposition(1, 420, head, tail);
    print(head);
    insertatposition(5, 620, head, tail);
    print(head);
    insertatposition(3, 520, head, tail);
    print(head);
    return 0;
}