#include <iostream>
#include <vector>
using namespace std;

void mergetwosortedarray(int arr[], int sizeA, int brr[], int sizeB, vector<int> &ans)
{
    int i = 0; // i->arr
    int j = 0; // j->brr

    // jab tak i and j arrays k bounds k andar hai..
    while (i < sizeA && j < sizeB)
    {
        if (arr[i] < arr[j])
            ans.push_back(arr[i++]);
        else
            ans.push_back(brr[j++]);
    }
    // agar main yaha tak aaya gay tu
    // toh 2 cases ho skte hai

    // 1->case arr me still ele present hai
    while (i < sizeA)
    {
        ans.push_back(arr[i++]);
    }
    // 2 case-> brr me still elem present hai
    while (j < sizeB)
    {
        ans.push_back(brr[j++]);
    }
}
int main()
{
    int arr[] = {20, 40, 60, 80, 90, 100};
    int sizeA = sizeof(arr) / sizeof(arr[0]);

    int brr[] = {10, 30, 50, 70};
    int sizeB = sizeof(brr) / sizeof(brr[0]);

    vector<int> ans;
    mergetwosortedarray(arr, sizeA, brr, sizeB, ans);

    for (int c : ans)
    {
        cout << c << " ";
    }
}