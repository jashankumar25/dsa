#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;
    cout << "hi" << endl;

    // insertion of stack
    s.push(10);
    s.push(20);
    s.push(30);

    // size
    cout << "\nsize of the stack:" << s.size() << endl;

    // empty
    cout << "empty or not:" << s.empty() << endl; // 0-false

    // peek of the element
    cout << "peek of the element:" << s.top() << endl;

    // removal
    s.pop();
    cout << "peek of the element:" << s.top() << endl;

    // print
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}