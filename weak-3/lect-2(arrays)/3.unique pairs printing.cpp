#include <iostream>
using namespace std;
void printAllPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << " ";
        }
        cout << endl;
    }
}
void downwardprint(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "," << arr[j] << " ";
        }
        cout << endl;
    }
}
void upperTriangle(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "      "; // 8 spaces per pair for alignment
        }
        for (int j = i; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    printAllPairs(arr, size);
    // jo mean copy par likha hai..
    cout << " triangle:-" << endl;
    downwardprint(arr, size);
    cout << "upper triangle:-" << endl;
    upperTriangle(arr, size);
}