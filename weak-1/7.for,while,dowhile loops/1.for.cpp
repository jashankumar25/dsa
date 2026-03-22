#include <iostream>
using namespace std;
int main()
{
    // for loop-
    for (int count = 1; count < 10; count = count + 1)
    {
        cout << "JASHAN here" << endl;
    }
    // counting from  to 10
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << i << " ";
    }
    cout << "\ncounting from  51 to 69\n";
    for (int i = 51; i < 70; i = i + 1) // for(int i=51;i<=69;i=i+1 )
    {
        cout << i << " ";
    }
    cout << "\n break keyword\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        if (i == 5)
        {
            break;
        }
    }
    cout << "\n break keyword\n";
    for (int i = 1; i <= 10; i++)
    {

        if (i == 5)
        {
            break;
        }
        cout << i << " ";
    }
    cout << "\n continue keyword\n";
    for (int i = 1; i <= 5; i++)
    {

        if (i == 3)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}