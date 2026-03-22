#include <iostream>
#include <vector>
using namespace std;
// void mergetwosoted(vector<int> arr1, int sizeA, vector<int> arr2, int sizeB, vector<int> &ans)
// {
//     int i = 0;
//     int j = 0;

//     while (i < sizeA && j < sizeB)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             ans.push_back(arr1[i]);
//             i++;
//         }
//         else
//         {
//             ans.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while (i < sizeA)
//     {
//         ans.push_back(arr1[i]);
//         i++;
//     }
//     while (j < sizeB)
//     {
//         ans.push_back(arr2[j]);
//         j++;
//     }
// }

void merge_array(vector<int> &arr, int mid, int s, int e)
{
    int leftlen = mid - s + 1;
    int rightlen = e - mid;

    int *leftarr = new int[leftlen];
    int *rightarr = new int[rightlen];

    int index = s;
    for(int i = 0; i < leftlen; i++)
    {
        leftarr[i] = arr[index];   // ✅ fixed
        index++;
    }

    index = mid + 1;
    for(int i = 0; i < rightlen; i++)
    {
        rightarr[i] = arr[index];  // ✅ fixed
        index++;
    }

    int i = 0, j = 0;
    int mainarrindex = s;
    while(i < leftlen && j < rightlen)
    {
        if(leftarr[i] < rightarr[j])
        {
            arr[mainarrindex] = leftarr[i];
            i++;
        }
        else
        {
            arr[mainarrindex] = rightarr[j];
            j++;
        }
        mainarrindex++;
    }

    while(i < leftlen)
    {
        arr[mainarrindex] = leftarr[i];
        i++;
        mainarrindex++;
    }

    while(j < rightlen)
    {
        arr[mainarrindex] = rightarr[j];
        j++;
        mainarrindex++;
    }

    delete[] leftarr;
    delete[] rightarr;
}

void merge_sorted(vector<int> &arr, int i, int j)
{

    int mid = (i + j) / 2;

    if (i >= j)
    {
        return;
    }
    merge_sorted(arr, i, mid);
    merge_sorted(arr, mid + 1, j);
    merge_array(arr, mid, i, j);
}
int main()
{
    // vector<int> arr1 = {10, 30, 50, 70, 90};
    // vector<int> arr2 = {20, 40, 60, 80, 100};

    // int sizeA = arr1.size();
    // int sizeB = arr2.size();

    // vector<int> ans;

    // mergetwosoted(arr1, sizeA, arr2, sizeB, ans);
    // int size=ans.size();

    // for(int k=0;k<size;k++){
    //     cout<<ans[k]<<" ";
    // }
    // cout<<endl;

    vector<int> arr = {10, 20, 50, 30, 40, 70, 100, 90, 60, 80};
    int size = arr.size();

    cout << "BEFOR SORTED ARRAY-" << endl;
    for (int a = 0; a < size; a++)
    {
        cout << arr[a] << " ";
    }
    cout << endl;
    int s = 0;
    int e = size - 1;
    merge_sorted(arr, s, e);
    
    for (int a = 0; a < size; a++)
    {
        cout << arr[a] << " ";
    }
    cout << endl;

}
