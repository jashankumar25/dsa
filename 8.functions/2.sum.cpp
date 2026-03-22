#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int totalsum = a + b;
    return totalsum;
}
void printmyname(); //-signature--
void printMyName()  //-no return a value
{
    cout << "\njashan ..kumar.." << endl;
}
int main()
{
    int ans = sum(10, 5);
    cout << ans;

    printMyName();
    printmyname();
    return 0;
}
void printmyname() //-no return a value
{
    cout << "\n..kumar.." << endl;
}