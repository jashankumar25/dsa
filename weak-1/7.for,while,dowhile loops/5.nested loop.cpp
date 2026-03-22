#include <iostream>
using namespace std;
int main()
{
    // for loop nested loop-
    for (int i = 1; i <= 3; i = i + 1)
    {
        for (int j = 1; j <= 3; j++)
        {
            // cout<<"THE Val of i:"<<i<<"and val of j:"<<j<<endl;
            cout << i << j << " ";
        }
        cout << endl;
    }
    //
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}