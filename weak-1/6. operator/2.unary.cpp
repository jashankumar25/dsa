#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << a << endl;
    ;
    cout << ++a << endl;
    // a ki value 6 ho chuki hai
    cout << (a++) << endl;
    // print kara toh 6 hi print hogi
    //,but a ki val- 7 ho chuki hai
    cout << a << endl;
    // yaha ki val-7 ban chuki hai
    cout << (--a) << endl;
    // a ki val-6 ban chuki hai
    cout << (a--) << endl;
    ;
    // print kara toh 6 hi print hogi
    //,but a ki val- 5 ho chuki hai
    cout << a;

    return 0;
}