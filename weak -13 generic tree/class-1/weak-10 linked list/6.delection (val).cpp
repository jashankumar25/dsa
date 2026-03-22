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
void insertattail(int value, node *&head, node *&tail)
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
}

void deletenode(int val, node *&head, node *&tail)
{ // if ll is empty,then we cannot delete
    if (head == NULL && tail == NULL)
    {
        cout << "NO NEED TO DELETE" << endl;
    }
    // single node-in ll
    else if (head == tail)
    {
        if (head->data == val)
        {
            node *temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
        }
        return;
    }
    else
    {
        // multiple node hai..
        // 2 case
        // pos==1 delete karna chate hai..
        if (head->data == val)
        {
            node *temp = head;
            head = temp->next;
            temp->next = NULL;

            delete temp;
        }
        else
        {
            node *prev = head;
            node *curr = prev->next;
            // node *forward = curr->next;

            while (curr != NULL && curr->data != val)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            curr->next = NULL;

            delete curr;
        }
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

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertattail(42, head, tail);
    insertattail(10, head, tail);
    insertattail(62, head, tail);
    insertattail(20, head, tail);
    insertattail(30, head, tail);
    insertattail(92, head, tail);

    print(head);
    deletenode(42, head, tail);
    print(head);
    deletenode(92, head, tail);
    print(head);
    deletenode(20, head, tail);
    print(head);

    return 0;
}