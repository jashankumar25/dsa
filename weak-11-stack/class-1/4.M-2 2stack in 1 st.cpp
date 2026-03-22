/*------- One array, two stacks-----
top1 → grows left → right
top2 → grows right → left
Overflow condition
top1 + 1 == top2
No wasted space ✅
https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1
*/

#include <iostream>
using namespace std;

class twostack
{
public:
    int *arr;
    int size, top1, top2;

    twostack(int cap)
    {
        arr = new int[cap];
        size = cap;
        top1 = -1;
        top2 = size - 1;
    }
    void push1(int val)
    {
        if (top2 - top1 == 1)
        {
            cout << "stack1 is overflow" << endl;
            return;
        }
        else
        {
            top1++;
            arr[top1] = val;
        }
    }
    void push2(int val)
    {
        if (top2 - top1 == 1)
        {
            cout << "stack2 is overflow" << endl;
            return;
        }
        else
        {

            top2--;
            arr[top2] = val;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "stack1 is underflow\n";
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
    void print()
    {
        cout << "top1:" << top1 << endl;
        cout << "top2:" << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    twostack ts(10); // array size = 10

    // Push in stack 1
    ts.push1(10);
    ts.push1(20);
    ts.push1(30);

    // Push in stack 2
    ts.push2(100);
    ts.push2(200);

    ts.print();

    // Pop from both stacks
    ts.pop1();
    ts.pop2();

    ts.print();

    return 0;
}