#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void quickSort(vector<int>& arr, int start, int end) {
        if (start >= end) {
            return;
        }
        int pivot = end;
        int i = start - 1;
        int j = start;

        while (j < pivot) {
            if (arr[j] < arr[pivot]) {
                i++;
                swap(arr[i], arr[j]);
            }
            j++;
        }
        i++;
        swap(arr[i], arr[pivot]);

        // Recursive calls
        quickSort(arr, start, i - 1);
        quickSort(arr, i + 1, end);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    sol.quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
