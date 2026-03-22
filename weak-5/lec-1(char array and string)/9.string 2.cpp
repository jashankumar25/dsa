#include <iostream>
using namespace std;

int main()
{
    // creation
    string str1;

    cout << "enter the input:";

    // cin >> str;//love
    getline(cin, str1, 'A'); // input-love hary

    // output
    cout << "your string:" << str1 << endl;
    cout << "ist index:" << str1[0] << endl;

    auto it = str1.begin();
    cout << "iterator the loop:";
    while (it != str1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}