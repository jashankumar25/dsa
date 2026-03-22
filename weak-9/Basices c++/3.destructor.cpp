#include <iostream>
using namespace std;

class Demo
{
public:
    int *data; // pointer to dynamically allocated memory

    // Constructor
    Demo(int value)
    {
        cout << "Constructor: Allocating memory" << endl;
        data = new int;  // allocate memory in heap
        *data = value;   // store value in heap memory
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor: Freeing memory" << endl;
        delete data; // release heap memory
    }
};

int main()
{
    cout << "Creating object A" << endl;
    Demo A(42); // calls constructor

    cout << "Value in A: " << *(A.data) << endl;

    cout << "Creating object B dynamically" << endl;
    Demo *B = new Demo(99); // constructor runs

    cout << "Value in B: " << *(B->data) << endl;

    delete B; // destructor runs for B
    cout << "Main ending" << endl;

    return 0; // destructor runs for A automatically
}
