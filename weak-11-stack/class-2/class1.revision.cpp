#include <iostream>
using namespace std;
/*
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "stack ka size-" << s.size() << endl;
    cout << "stack is empty or not-" << s.empty() << endl;
    s.pop();
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "stack ka size-" << s.size() << endl;
    cout << "stack is empty or not-" << s.empty() << endl;
class Stack
{
public:
    int *arr, size, top;

    Stack(int cap)
    {
        arr = new int[cap];
        size = cap;
        top = -1;
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow" << endl;
            return;
        }
        else
        {
            arr[top] = -1;
            top--;
        }
    }
    int getsize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "stack is empty";
            return true;
        }
        else
        {
            return false;
        }
    }
    int gettop()
    {
        if (top == -1)
        {
            cout << "trere is no val ,so stack is empty";
            return -1;
        }
        return arr[top];
    }
    void print()
    {
        cout << "printinf the stack-" << endl;
        for (int i = 0; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
*/
class twostack
{

public:
    int *arr, top1, top2, size;

    twostack(int cap)
    {
        arr = new int[cap];
        size = cap;
        top1 = -1;
        top2 = size - 1;
    }

    void push(int val)
    {
        if (top1 >= 0)
        {
            top1++;
            arr[top1] = val;
        }
        if (top2 <= size - 1)
        {
            arr[++top2] = val;
        }
        if (top1 == top2)
        {
            cout << "stack is full" << endl;
            return;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "stack is underflow" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "stack2 is underflow\n";
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    s.push(40);
    s.push(50);

    s.print();
    s.push(60);
    s.print();

    cout << "top-" << s.gettop();
    cout << "\nsize-" << s.getsize();
    cout << "stack is empty-" << s.isEmpty();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    return 0;
}
using redux  1. manage the state of todo list ... state title:string  status:string 'pending',"done"))

react-redux -1. add task 
              2. delete task ..
