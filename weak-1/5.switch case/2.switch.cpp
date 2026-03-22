#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "enter your  grade (A,B,C,D, OTHER ):";
    //-input
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "your marks will be range of 90 and 100" << endl;
        break;
    case 'B':
        cout << "your marks will be range of 80 and 90" << endl;
        break;
    case 'C':
        cout << "your marks will be range of 70 and 80" << endl;
        break;
    case 'D':
        cout << "your marks will be range of 60 and 70" << endl;
        break;
    default:
        cout << "your marks will be range of 0 and 60" << endl;
        break;
    }
    return 0;
}