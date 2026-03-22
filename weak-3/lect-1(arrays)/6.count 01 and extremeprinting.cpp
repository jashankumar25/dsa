#include <iostream>
using namespace std;

void countZeroAndOne(int arr[], int n)
{
    int zerocount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        int current_element = arr[i];
        if (current_element == 0)
        {
            zerocount++;
        }
        if (current_element == 1)
        {
            oneCount++;
        }
    }
    cout << "\nTotal Zeroes-" << zerocount << endl;
    cout << "Total-Ones-" << oneCount << endl;
}
void extremePrinting(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
            break;
        }
        else
        {

            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
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
    extremePrinting(arr, size);
    countZeroAndOne(arr, size);
    return 0;
}