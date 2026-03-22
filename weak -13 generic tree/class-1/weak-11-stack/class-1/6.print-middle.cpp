#include <iostream>
#include <stack>
using namespace std;
/* ---method-1----
-----in this case data is lose so

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int middle = s.size() / 2;

    for (int i = 0; i < middle; i++)
    {
        s.pop();
    }
    cout << "middle element =" << s.top();   */
/* -----METHOD-2 ----
   ---------------Using Auxiliary Stack (No data loss)----
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    stack<int> temp;
    int middle = s.size() / 2;

    for (int i = 0; i < middle; i++)
    {
        temp.push(s.top());
        s.pop();
    }
    cout << "midddle element:" << s.top() << endl;

    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    } */
void print_middle(stack<int> &s, int count, int middle)
{
    if (count == middle)
    {
        cout << "middle elem:" << s.top() << endl;
        return;
    }

    int topelement = s.top();
    s.pop();
    count++;
    print_middle(s, count, middle);
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

    int middle = s.size() / 2;
    int count = 0;
    print_middle(s, count, middle);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
