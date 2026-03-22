#include <iostream>
#include <vector>
using namespace std;
bool linearSearch( vector<int> arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    cout << "print a array:";
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target = 50;
    bool ans = linearSearch(arr, n, target);
    if (ans)
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }
}