#include <iostream>
using namespace std;
int main()
{
    // logical opertors.
    bool cond1 = (10 >= 4); // 1-true
    bool cond2 = true;
    bool cond3 = 1;

    if (cond1 && cond2 && cond3)
    {
        cout << "ALL CONDITIONS ARE TRUE" << endl;
    }
    else
    {
        cout << "ALL CONDITIONS ARE  not TRUE";
    }
    bool cond4 = (10 <= 4); // 0-false
    bool cond5 = 0;
    bool cond6 = 0;
    if (cond4 || cond5 || cond6) // or logical
    {
        cout << "AT LEAST ONE  CONDITIONS ARE TRUE" << endl;
    }
    else
    {
        cout << "ALL CONDITIONS ARE  not TRUE" << endl;
    }
    bool cond8 = (5 != 7);  //-true
    cout << cond8 << endl;  // 1
    cout << !cond8 << endl; // 0
    return 0;
}