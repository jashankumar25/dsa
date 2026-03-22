#include <iostream>
#include <stack>
#include <climits>
using namespace std;
bool check_sorted(stack<int> &s, int elem1)
{
    if (s.empty())
    {
        cout << "data is sorted hai" << endl;
        return true;
    }

    int elem2 = s.top();
    s.pop();
    if (elem2 < elem1)
    { // iska matlab aage check kar sakte ahi

        bool nextans = check_sorted(s, elem2);
        s.push(elem2);
        return nextans;
    }
    else
    {
        // iska matlab sorted hi nhi hai..
        return false;
    }
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int elem1 = INT16_MAX;
    cout << check_sorted(s, elem1) << endl;
    ;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
