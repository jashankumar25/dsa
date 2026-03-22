#include <iostream>
using namespace std;

int main()
{
    //-IMPLICT TYPECASTING
    // 1.-INT TO FLOAT
    int num1 = 10;
    float num2 = 5.5;

    float result = num1 + num2;
    cout << "the sum of IMPLICT FUN-" << result << endl;
    // implict conversion of num1 from int to float

    //  2..char to int
    char ch = 'A';
    int a = ch + 1;  // implict conversion  from char to int
    char b = ch + 1; // char to char
    cout << b << "-- ";
    cout << a << endl;

    // 3. int to char
    int c = 97;
    char cha = c; // implict conversion  from int to char
    cout << cha << endl;

    char g = 'g';
    int gg = g;
    cout << gg << endl;
    return 0;
}