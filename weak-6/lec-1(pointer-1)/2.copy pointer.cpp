#include<iostream>
using namespace std;
int main()
{
    int a = 5;            // Declare an integer variable 'a' and assign value 5
    int *p = &a;          // Declare pointer 'p' and assign it the address of 'a'
    int *q = p;           // Copy the pointer 'p' into 'q'. Now both 'p' and 'q' point to 'a'
    
    cout << "a: " << a << endl;         // Value of a → 5
    cout << "&a: " << &a << endl;       // Address of a → e.g., 0x61ff0c

    // cout << "*a: " << *a << endl;    ❌ INVALID — can't dereference a non-pointer variable

    cout << "p: " << p << endl;         // p holds address of a → e.g., 0x61ff0c
    cout << "&p: " << &p << endl;       // address of pointer variable p → e.g., 0x61fefc
    cout << "*p: " << *p << endl;       // dereferencing p gives value at that address → 5

    cout << "q: " << q << endl;         // q also holds address of a → same as p
    cout << "&q: " << &q << endl;       // address of pointer variable q → different from &p
    cout << "*q: " << *q << endl;       // dereferencing q also gives 5


    return 0;
}