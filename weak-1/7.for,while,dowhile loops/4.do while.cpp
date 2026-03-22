#include <iostream>
using namespace std;
int main()
{
    // for loop
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << i << " ";
    }
    cout << endl;

    int i = 1;
    do
    { // logic
        cout << i << " ";
        //-updation
        i = i + 1;
    } while (i <= 5);
    cout << endl;
    //-20 times print name'
    int j = 1;
    do
    {
        cout << " jashan" << " ";
        j = j + 1;
    } while (j <= 20);

    return 0;
}