#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    // input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the val for box index-" << i << endl;
        cin >> arr[i];
    }
    //-print
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }
    //-arr[i]=i[arr];
    cout << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << i[arr] << " ";
    }
    return 0;
}