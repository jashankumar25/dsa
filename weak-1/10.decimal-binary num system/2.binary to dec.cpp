#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDecimalMethod1(int n)
{

    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n /= 10;
    }
    return decimal;
}
int BinaryToDecimalMethod2(int n)
{

    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        decimal = bit * pow(2, i++) + decimal;
        n /= 10;
    }
    return decimal;
}

int main()
{
    int binaryNo;
    cout << "enter your binary number-";
    cin >> binaryNo;
    cout << "METHOD-1:";
    cout << BinaryToDecimalMethod1(binaryNo) << endl;
    cout << "METHOD-2:";
    cout << BinaryToDecimalMethod2(binaryNo) << endl;

    return 0;
}