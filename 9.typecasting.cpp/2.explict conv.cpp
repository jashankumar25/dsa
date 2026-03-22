#include <iostream>
using namespace std;

int main()
{
    //-EXPLICT TYPECASTING
    // 1.- DOUBLE TO INT
    double pi = 3.14558428;
    int pie = (int)pi;

    // explict conversion of pie from double to int
    cout << " EMPLICT FUN-" << pie << endl;

    //  2.float to char
    float floatNumber = 65.35;
    char charValue = (char)floatNumber;
    // explict conversion of floatNumber from float into char
    cout << "float to char--" << charValue << endl;

    // 3.int to float
    int a = 10;
    int b = 3.0;

    float c = ((float)a) / b;
    float d = a / (float)b;
    // explict comnversion from int to char
    cout << c << endl;
    cout << d << endl;

    return 0;
}