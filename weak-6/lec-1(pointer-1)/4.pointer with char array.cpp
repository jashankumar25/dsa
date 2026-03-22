#include <iostream>
using namespace std;

int main()
{
    char ch[10] = "racecar"; // Character array
    char *ptr = &ch[0];      // Pointer to first character

    cout << "ch = " << ch << endl;                // racecar
    cout << "&ch[0] = " << &ch[1] << endl;        // Address of second character
    cout << "&ch = " << &ch << endl;              // Address of the array (same as ch)
    cout << "*ch = " << *ch << endl;              // Would work, gives 'r'
    cout << "* (ch + 3) = " << *(ch + 3) << endl; // e

    cout << "ptr = " << ptr << endl;   // racecar
    cout << "&ptr = " << &ptr << endl; // Address of pointer variable
    cout << "*ptr = " << *ptr << endl; // r

    cout << "*(ptr + 3) = " << *(ptr + 3) << endl; // e
    cout << "ptr + 2 = " << (ptr + 2) << endl;     // cecar
    cout << "ptr + 4 = " << (ptr + 4) << endl;     // car

    return 0;
}
