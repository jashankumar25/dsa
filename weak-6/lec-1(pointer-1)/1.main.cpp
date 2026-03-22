#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // cout<<a;

    // int b=a;
    // int c=&a;  #-->error

    int a = 5;
    int *iptr = &a;

    cout << "size of ptr(int)=" << sizeof(iptr) << endl;

    char ch = 'k';
    char *cptr = &ch;

    cout << "size of ptr(char)=" << sizeof(cptr) << endl;

    long l = 1040;
    long *lptr = &l;

    cout << "size of ptr(long)=" << sizeof(lptr) << endl;

    cout << "Pointer size: " << sizeof(void *) << " bytes" << endl;
    if (sizeof(void *) == 8)
        cout << "64-bit architecture" << endl;
    else if (sizeof(void *) == 4)
        cout << "32-bit architecture" << endl;

    /* declaration-BAD PARTICE
    int g=5;
    int *ptr;
    cout << "declaration of pointer-" << *ptr << endl;

    ⚠️ Important: The pointer contains a garbage address, and printing it is undefined behavior
    — it may print a memory address, or crash, depending on system/compiler.*/

    int *ptr = 0;
    if (ptr == 0)
        cout << "ptr is a null pointer. Cannot dereference it safely!" << endl;
    else
        cout << "Value at ptr = " << *ptr << endl;

    return 0;
}
