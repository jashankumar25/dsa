#include <iostream>
#include <vector>
using namespace std;

void mergearray(vector<int> &arr, int s, int mid, int e)
{
    int leftlen = mid - s + 1;
    int rightlen = e - mid;

    // create a array left or right -but a empty.
    int *leftarr = new int[leftlen];
    int *rightarr = new int[rightlen];

    // fill or copy the left and right arrays.

    // copy orginial array ->valves
    // original array ka starting index
    int index = s;
    for (int i = 0; i < leftlen; i++)
    {
        leftarr[i] = arr[index];
        index++;
    }

    // right wala
    index = mid + 1;
    for (int i = 0; i < rightlen; i++)
    {
        rightarr[i] = arr[index];
        index++;
    }

    // merge logic
    int leftindex = 0;
    int rightindex = 0;
    int mainarrayindex = s;

    while (leftindex < leftlen && rightindex < rightlen)
    {
        if (leftarr[leftindex] < rightarr[rightindex])
        {
            arr[mainarrayindex] = leftarr[leftindex];
            leftindex++;
            mainarrayindex++;
        }
        else
        {
            arr[mainarrayindex] = rightarr[rightindex];
            rightindex++;
            mainarrayindex++;
        }
    }
    while (leftindex < leftlen)
    {
        arr[mainarrayindex] = leftarr[leftindex];
        leftindex++;
        mainarrayindex++;
    }
    while (rightindex < rightlen)
    {
        arr[mainarrayindex] = rightarr[rightindex];
        rightindex++;
        mainarrayindex++;
    }
    delete[] leftarr;
    delete[] rightarr;
}

void mergesort(vector<int> &arr, int s, int e)
{
    if (s > e)
        return;
    if (s == e)
        return; 
    int mid = s + (e - s) / 2;
    // left wala recussion se solve karwao..
    mergesort(arr, s, mid);
    // right wala recussion see solve karwo...
    mergesort(arr, mid + 1, e);
    // dono parts ko merge kardo..
    mergearray(arr, s, mid, e);
}
int main()
{
    vector<int> arr = {10, 80, 100, 30, 90, 70, 60, 20, 110, 120, 50, 40};
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    cout<<"befor:-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, s, e);
    
    cout<<"after:-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}