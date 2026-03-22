#include <iostream>
#include <stack>
using namespace std;

void print_middle(stack<int> &s, int count)
{
    if (count == 0)
    {
        cout << "middle elem:" << s.top() << endl;
        return;
    }

    int topelement = s.top();
    s.pop();
    count--;
    print_middle(s, count);
    s.push(topelement);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int count = s.size() / 2;
    print_middle(s, count);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
