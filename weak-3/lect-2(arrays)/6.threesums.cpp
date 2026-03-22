#include <iostream>
using namespace std;

void printAllTriplets(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total triplets: " << count << endl;
}

void checkThreesums(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                }
            }
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    int target = 70;

    printAllTriplets(arr, size);
    checkThreesums(arr, size, target);
}
