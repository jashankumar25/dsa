#include <iostream>
using namespace std;
int main()
{
    // bitwise  opertors.

    cout << (5 & 4) << endl;  // 4
    cout << (5 | 4) << endl;  // 5
    cout << (~1) << endl;     //-2
    cout << (~5) << endl;     //-6
    cout << (~5) << endl;     //-6
    cout << (5 << 1) << endl; // 10
    cout << (5 << 2) << endl; // 20

    cout << " right shift -div by 2" << endl;
    cout << (1 >> 1) << endl;   //-6
    cout << (100 >> 1) << endl; // 50
    cout << (100 >> 2) << endl; // 25
    cout << (100 >> 3) << endl; // 12

    cout << (5 ^ 5) << endl; // same ha toh -0
    cout << (5 ^ 4) << endl; // 1

    return 0;
}