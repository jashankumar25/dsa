#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next; // stores the address of the next node.

    // constructor
    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
// function- pointer return kar gaya and & -track of head and tail
// returns head of the new ll after the insertion .
node *insertathead(int value, node *&head, node *&tail)
{
    // ll is empty;- head and tail both null ko point krre honge
    // it means we are creating fisrt node of ll
    if (head == NULL && tail == NULL)
    { // steps 1:-CREATE a node
        node *newnode = new node(value);
        // steps 2:-head ko node pr lagado
        head = newnode;
        // steps 3:-> tail ko newnode pr lagodo
        tail = newnode;
    }
    else
    {
        // LL IS NOT A EMPTY
        // pehle se node prsent hai
        // insert at head
        // steps1: create a node
        node *newnode = new node(value);
        // steps2-connect this newnode to head node
        newnode->next = head;
        // steps3-head update karna
        head = newnode;
    }
    return head;
}

void print(node *head)
{
    node *temp = head;
    // jaba tak temp=null,tab tak print karo
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next; // temp ko 1 step increase kiya hai
    }
    cout << "NULL" << endl;
}
int main()
{
    // stack -memeory allocted-(stack)
    // node first;

    // dynamic-memory allocted-(heap)
    // node *firstt = new node(10);

    node *head = NULL;
    node *tail = NULL;
    // LL IS empty
    insertathead(10, head, tail); // 10->null
    print(head);
    insertathead(20, head, tail); // 20->10->null
    print(head);

    insertathead(30, head, tail); // 30->20->10->null
    print(head);

    cout << "Linked list created successfully" << endl;
    print(head);

    return 0;
}