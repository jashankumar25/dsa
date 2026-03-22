#include <iostream>
using namespace std;
int main()
{
    // int datatype
    int count = 5;
    // float datatype
    float share = 3.14;
    // char datatype
    char alphabet = 'z'; // -single quotes me hogi val
    // double data type
    double weight = 55.56829;
    // bool datatype
    bool ismale = true;
    //  bool ischild = 1; // acts as true
    // bool isfalse = 0; // acts as false

    cout << "INT:" << count << endl;
    cout << "FLOAT:" << share << endl;
    cout << "CHAR:" << alphabet << endl;
    cout << "DOUBLE:" << weight << endl;
    cout << "Bool:" << ismale << endl;
    // cout << ischild << endl;
    // cout << isfalse << endl;

    // size of function
    int agg = 12;
    cout << sizeof(agg) << endl;
    // 2 variable can be declare --individual or nested if
    int jashan = 9;
    {
        int jashan = 90;
        cout << jashan << endl;
    }
    cout << jashan;

    return 0;
}