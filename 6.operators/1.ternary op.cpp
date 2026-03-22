#include <iostream>
using namespace std;
int main()
{
    int age = 9;

    (age > 18) ? cout << "can vote" : cout << "canot vote";
    int x = 10;
    int y = 29;

    int result = x > y ? x : y;
    cout << "\nthe larger value:" << result << endl;

    return 0;
}