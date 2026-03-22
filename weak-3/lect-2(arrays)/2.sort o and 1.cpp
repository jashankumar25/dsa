#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    // counting
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }

        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    /*// fill method
    fill(arr, arr + zeroCount, 0);
    fill(arr + zeroCount, arr + size, 1);
      */
    for (int i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }
    for (int i = zeroCount; i < size; i++)
    {
        arr[i] = 1;
    }
    cout << " m-1 printing-sort 0 and 1's-" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    int size = 7;

    sortZeroOne(arr, size);
    sort(arr, arr + size);
    cout << " m-2 printing-sort 0 and 1's-" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}