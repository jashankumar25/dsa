/*  ODD OCCURING ELEMENT-
A-> all element occurs even number of times except one
B-> element repeat itself in pairs.
C-> (no pair repeats itself) , no number can occur
    more than 2 times in  single sketch
D-> find the element that odd times .
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findOddOccurringElement(vector<int> arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int findOddOccurringElementWithMap(const vector<int> &arr)
{
    map<int, int> freq;

    // Count frequency of each element
    for (int num : arr)
    {
        freq[num]++;
    }

    // Find the element with odd frequency
    for (auto &pair : freq)
    {
        if (pair.second % 2 != 0)
        {
            return pair.first;
        }
    }

    return -1; // If no odd-occurring element found
}

int main()
{
    vector<int> arr = {1, 1, 16, 4, 2, 3, 3, 2, 4, 5, 5, 3, 3};
    int n = arr.size();

    int oddElement = findOddOccurringElement(arr, n);
    cout << "Odd occurring element (XOR method): " << oddElement << endl;

    int oddElement1 = findOddOccurringElementWithMap(arr);
    cout << "Odd occurring element (using map): " << oddElement1 << endl;
}
