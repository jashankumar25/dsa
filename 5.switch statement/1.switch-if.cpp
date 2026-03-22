#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "enter your  grade :";
    //-input
    cin >> grade;

    if (grade == 'A') // comparsion
    {
        cout << "your marks will be range of 90 and 100" << endl;
    }
    else if (grade == 'B')
    {
        cout << "your marks will be range of 80 and 90" << endl;
    }
    else if (grade == 'C')
    {
        cout << "your marks will be range of 70 and 80" << endl;
    }
    else if (grade == 'D')
    {
        cout << "your marks will be range of 60 and 70" << endl;
    }
    else
    {
        cout << "your marks will be range of 0 and 60" << endl;
    }

    return 0;
}