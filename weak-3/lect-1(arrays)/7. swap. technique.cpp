#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, temp;
    cout << " enter the val of 1 digit-";
    cin >> a;
    cout << "enter the val of 2 digit-";
    cin >> b;
    // swap(a, b);
    temp = a;
    a = b;
    b = temp;
    cout << "val of 1 digit-" << a << endl;
    cout << "val of 2 digit-" << b << endl;
    a = a + b;
    a = a - b;
    b = a - b;
    cout << "M-3" << endl;
    cout << "val of 1 digit-" << a << endl;
    cout << "val of 2 digit-" << b << endl;
    // a-10 and b-5 after apply oparatrtion
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "M-4-xor opartions-" << endl;
    cout << "val of 1 digit-" << a << endl;
    cout << "val of 2 digit-" << b;

    return 0;
}