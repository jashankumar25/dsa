#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int shift)
{
    int finalShift = shift % size;
    if (finalShift == 0)
    {
        // no need to change
        return;
    }
    // step1:copy last finalshift elements into a temp array
    int temp[10000];
    int index = 0;
    for (int i = size - finalShift; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    // shift array elements by finalshiftpass

    for (int i = size - 1; i >= 0; i--)
    {
        if (i - finalShift >= 0)
        {
            arr[i] = arr[i - finalShift];
        }
    }
    // step-3 copy temp elments into  original array
    for (int i = 0; i < finalShift; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    // cylically rotate array by 2 places

    int shift = 3;
    cout << "Before:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateArray(arr, size, shift);

    // print array
    cout << "after: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}