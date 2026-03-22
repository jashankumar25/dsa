#include <iostream>
#include <stack>

using namespace std;

/* stack<string> str;

    str.push("a");
    str.push("b");
    str.push("c");
    str.push("d");

    cout << "printing-reverse a stack=" << endl;

    while (!str.empty())
    {
        cout << str.top() << " ";
        str.pop();
    }*/
int main()
{
    stack<char> s;

    string name = "jashankumar";

    for (size_t i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        s.push(ch);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}