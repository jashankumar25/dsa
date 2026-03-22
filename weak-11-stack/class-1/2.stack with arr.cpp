#include <iostream>
using namespace std;

class stack
{
public:
    int *arr; // dyanamic array ...
    int size, top;

    stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "overflow_stack is full" << endl;
            return;
        }
        else
        {
            top = top + 1;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "underflow_stack is empty" << endl;
            return;
        }
        else
        {
            arr[top] = 0;
            top = top - 1;
        }
    }
    int getsize()
    {
        return top + 1;
    }
    bool isempty()
    {
        if (top == -1)
        {
            // cout << "stack is empty" << endl;
            return true;
        }
        else
        {
            // cout << "stack is not empty" << endl;
            return false;
        }
    }
    int gettop()
    {
        if (top == -1)
        {
            cout << "there is no eleement ,bcz stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    void print()
    {
        cout << "printing stack-" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    stack s(5);
    s.print(); // 0 0 0 0 0

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    s.push(60);
    s.print();

    cout << "top element :" << s.gettop() << endl;
    cout << "size:" << s.getsize() << endl;
    cout << "empty or not:" << s.isempty() << endl;
    s.pop();
    s.pop();
    s.print();
    cout << "size:" << s.getsize() << endl;
    s.pop();
    s.pop();
    s.pop();
    cout << "empty or not:" << s.isempty() << endl;
    s.pop();

    return 0;
}