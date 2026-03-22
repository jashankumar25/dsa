#include <iostream>
using namespace std;
class stack
{
public:
    int *arr, size, top1, top2, mid;

    stack(int cap)
    {
        arr = new int[cap];
        size = cap;
        top1 = -1;
        mid = size / 2;
        top2 = mid - 1;
    }
    void push1(int val)
    {
        if (top1 < mid - 1)
        {
            top1 = top1 + 1;
            arr[top1] = val;
        }
        else
        {
            cout << "stack1 is overflow" << endl;
        }
    }
    void push2(int val)
    {
        if (top2 < size - 1)
        {
            top2 = top2 + 1;
            arr[top2] = val;
        }
        else
        {
            cout << "stack2 is overflow" << endl;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int val = arr[top1];
            top1 = top1 - 1;
            return val;
        }
        else
        {
            cout << "stack1 is inderflow";
            return -1;
        }
    }
    int pop2()
    {
        if (top2 >= mid)
        {
            int val = arr[top2];
            top2 = top2 - 1;
            return val;
        }
        else
        {
            cout << "stack2 is inderflow";
            return -1;
        }
    }
};
int main()
{
    stack s(8);

    s.push1(10);
    s.push1(20);
    s.push1(30);

    s.push2(40);
    s.push2(50);

    cout << s.pop1() << endl; // 30
    cout << s.pop2() << endl; // 50

    return 0;
}
