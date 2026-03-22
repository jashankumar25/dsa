#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }
    // 1 case hum karenge and baaki rec karega
    int topelement = s.top();
    s.pop();

    insertatbottom(s, val); // bbaki rec

    s.push(topelement); // backtracking
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int val = 25;
    insertatbottom(s, val);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
