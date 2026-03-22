#include <iostream>
#include <vector>
using namespace std;

void findFirstOccurrence(vector<int>& arr, int& firstIndex, int target, int n) {
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            firstIndex = mid;
            e = mid - 1; // check left part
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
}

void findLastOccurrence( vector<int>& arr, int& lastIndex, int target, int n) {
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            lastIndex = mid;
            s = mid + 1; // check right part
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
}

int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int n = arr.size();

    int firstIndex = -1;
    int lastIndex = -1;

    findFirstOccurrence(arr, firstIndex, target, n);
    findLastOccurrence(arr, lastIndex, target, n);

    cout << "First Occurrence Index = " << firstIndex << endl;
    cout << "Last Occurrence Index = " << lastIndex << endl;

    if (firstIndex != -1 && lastIndex != -1) {
        cout << "Total Occurrences = " << (lastIndex - firstIndex + 1) << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}
