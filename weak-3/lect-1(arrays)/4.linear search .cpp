#include <iostream>
using namespace std;
bool findTarget(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return true;
        }
    }
    return false;
    // agar yaha tak  pohoch gyr toh
    // iska matlab poore loop tar val nhi mil
    // tu return false hoga ..
}
int main()
{
    int arr[150];
    int size;

    cout << "enter the val of size of array-";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the val of index" << i << endl;
        cin >> arr[i];
    }
    int target;
    cout << "enter your target-";
    cin >> target;

    bool ans = findTarget(arr, size, target);

    if (ans)
        cout << "Target found!" << endl;
    else
        cout << "Target not found!" << endl;
    return 0;
}