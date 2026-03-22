#include <iostream>
using namespace std;

int main()
{
    string str;
    str.push_back('l');
    str.push_back('o');
    str.push_back('v');
    str.push_back('e');
    str.push_back('y');

    cout << "Initial string: " << str << endl; // lovey

    str.pop_back();                            // Remove 'y'
    cout << "After pop_back: " << str << endl; // love

    cout << "Using at(0): " << str.at(0) << endl;       // l
    cout << "Front character: " << str.front() << endl; // l
    cout << "Back character: " << str.back() << endl;   // e
    cout << "Length: " << str.length() << endl;         // 4

    // str.clear();

    if (str.empty())
        cout << "string is empty" << endl;
    else
        cout << "string is not empty" << endl;

    string str1 = "hello jee kaise ho saare";
    string word = "kaise";

    cout << str1.substr(0, 5) << endl; //-a-position of index and b->a upto len 5
    cout << str.substr(0) << endl;

    int ans = str1.find(word);
    cout << "find :" << ans << endl;

    // if(name.find(word)!=string::npos){/not found}.

    string ans1 = str + " " + str1;
    cout << "catenation=" << ans1 << endl;
}