#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int valve)
    {
        this->data = valve;
        this->next = NULL;
    }
};
// return->head of the updated list after the inseetion
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
        // steps2-tail node ko new node se connect karo
        tail->next = newnode;
        // step3-tail ko updated karo...
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

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertattail(10, head, tail);
    print(head);
    insertattail(20, head, tail);
    print(head);
    insertattail(30, head, tail);
    print(head);

    cout << "Linked list created successfully" << endl;
    print(head);
    return 0;
}