#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};

    // arr = arr + 1; // ❌ This line causes an error
    // arr is like a constant: fixed_address

    int *ptr = arr;       // pointer to first element
    cout << *ptr << endl; // prints value at arr[0] => 10
    // ptr is like a variable: ptr = fixed_address
    
    ptr = ptr + 1;        // now points to arr[1] (i.e., 20)
    cout << *ptr << endl; // prints value at arr[1] => 20

    // char-array
    char ch[20] = "Babbar";
    char *cptr = ch;

    cout << "ch=" << ch << endl;       // Babbar
    cout << "&ch=" << &ch << endl;     // 104
    cout << "ch[0]=" << ch[0] << endl; // B

    cout << "&cptr=" << &cptr << endl; // 420
    cout << "*cptr=" << *cptr << endl; //-->B

    cout << "*(cptr+3)=" << *(cptr + 3) << endl; //-->b

    // prints the full string starting from cptr (i.e., "Babbar")
    cout << "cptr=" << cptr << endl;       //--Babbar
    cout << "cptr+3=" << cptr + 3 << endl; //--bar

    return 0;
}