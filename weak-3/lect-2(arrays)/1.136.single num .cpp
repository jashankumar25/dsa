#include <iostream>
#include <vector>
using namespace std;
int findUniqueNumber(int arr[], int size)
{
    int ans = 0;
    // to find the final answer ,
    // we need to XOR ALL THE NUMBER IN THE ARRAY
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {9, 4, 1, 4, 1};
    int size = 5;
    int ans = findUniqueNumber(arr, size);
    cout << "Unique element is:" << ans << endl;
    return 0;
}