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
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
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

void insertatposition(int pos, int value, node *&head, node *&tail)
{
    int length = getlength(head);
    if (pos == 0)
    {
        insertathead(value, head, tail);
    }
    else if (pos == length + 1)
    {
        insertattail(value, head, tail);
    }
    else
    {
        node *prev = head;

        for (int i = 0; i < pos - 2; i++)
        {
            prev = prev->next;
        }

        node *newnode = new node(value);
        node *curr = prev->next;

        newnode->next = curr;
        prev->next = newnode;
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
    cout << endl;
}

int search(int target, node *head)
{
    int len = 1;
    node *temp = head;
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

void delectionnode(int pos, node *&head, node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        cout << "no need to delelte" << endl;
    }
    else if (head == tail)
    {
        node *temp = head;
        head = NULL;
        tail = NULL;

        delete temp;
    }
    else
    {
        if (pos == 1)
        {
            node *temp = head;
            head = temp->next;
            temp->next = NULL;

            delete temp;
        }

        else
        {
            node *prev = head;

            for (int i = 0; i < pos - 2; i++)
            {
                prev = prev->next;
            }

            node *curr = prev->next;
            node *forward = curr->next;

            prev->next = forward;
            curr->next = NULL;

            delete curr;
            // delete forward;
        }
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    //  insertathead(30, head, tail);
    // print(head);
    // insertathead(20, head, tail);
    // print(head);
    // insertathead(10, head, tail);
    // print(head);

    insertattail(100, head, tail);
    // print(head);
    insertattail(200, head, tail);
    // print(head);
    insertattail(300, head, tail);
    print(head);

    insertatposition(0, 10, head, tail);
    print(head);
    insertatposition(5, 50, head, tail);
    print(head);
    insertatposition(2, 900, head, tail);
    print(head);

    delectionnode(2, head, tail);
    print(head);
    delectionnode(1, head, tail);
    print(head);
    delectionnode(4, head, tail);
    print(head);

    int ans = search(900, head);
    if (ans == -1)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found at position=" << ans << endl;
    }
    return 0;
}