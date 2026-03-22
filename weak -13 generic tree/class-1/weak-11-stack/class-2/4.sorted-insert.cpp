#include <iostream>
#include <stack>
using namespace std;

void sorted_insertion(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }

    // pehle check karo -stack not empty
    // jab top ko direct ly use kar tu..
    if (!s.empty() && s.top() < val)
    {
        s.push(val);
        return;
    }
    int temp1 = s.top();
    s.pop();
    sorted_insertion(s, val);
    s.push(temp1);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int val = 23;
    sorted_insertion(s, val);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}