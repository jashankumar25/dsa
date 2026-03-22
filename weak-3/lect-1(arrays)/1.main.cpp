#include <iostream>
using namespace std;
int main()
{
    int arr[10]; // declare

    // int brr[];//error- size should be declare
    int crr[] = {10, 20, 30, 70}; // initialize
    int drr[4] = {0};

    cout << "The val at 0 indx in drr-" << drr[0] << endl;

    cout << "The val at 0 indx in crr-" << crr[0] << endl;
    cout << "The val at 1 indx in crr-" << crr[1] << endl;

    cout << "The val at 0 indx in arr-" << arr[0] << endl; // random val hogi

    int ary[3] = {10, 20, 30}; // fill method
    fill(ary, ary + 3, 23);
    cout << "The val at 0 indx in ary-" << ary[0] << endl;
    cout << "The val at 1 indx in ary-" << ary[1] << endl;
    cout << "The val at 2 indx in ary-" << ary[2] << endl;

    return 0;
}