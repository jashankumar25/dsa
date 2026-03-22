#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s, int temp)
{
    if (s.empty())
    {
        s.push(temp);
        return;
    }
    int temp1 = s.top();
    s.pop();
    insertatbottom(s, temp);
    s.push(temp1);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);

    insertatbottom(s, temp);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    stack<int> temp = s;
    cout << "original stack: ";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    reverse(s);

    cout << "reversed stack: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
