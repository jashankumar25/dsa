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
    { // m fisrt node create karu ga...
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
void printreverse(node *tail)
{

    node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NUll" << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertathead(30, head, tail);
    print(head);
    insertathead(20, head, tail);
    print(head);
    insertathead(10, head, tail);
    print(head);
    cout << "reverse a linked list" << endl;
    printreverse(tail);
    return 0;
}