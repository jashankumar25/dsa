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

// Insert at head
void insertathead(int val, node *&head, node *&tail)
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
        newnode->next = head;
        head = newnode;
    }
}

// Reverse singly linked list
void reverselist(node *&head, node *&tail)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    node *prev = NULL;
    node *curr = head;

    while (curr != NULL)
    {
        node *forward = curr->next; // store next
        curr->next = prev;          // reverse link
        prev = curr;                // move prev
        curr = forward;             // move curr
    }

    // update head and tail
    tail = head;
    head = prev;
}

// Print list
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
    insertathead(5, head, tail);

    cout << "Original List: ";
    print(head);

    reverselist(head, tail);

    cout << "Reversed List: ";
    print(head);

    return 0;
}
