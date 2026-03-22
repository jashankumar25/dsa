// ODD OCCURING ELEMENT

#include <iostream>
#include <vector>
using namespace std;

int findOddOccurringElement(vector<int> arr, int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        cout << "mid=" << mid<<endl;

        if (s == e) // ye he element odd element wala hai.
            return s;

        int leftvalue = -1;
        int rightvalue = -1;
        int currentvalue = arr[mid];

        if (mid - 1 >= 0)
        {
            leftvalue = arr[mid - 1];
        }
        if (mid + 1 < n)
        {
            rightvalue = arr[mid + 1];
        }

        // duplicate does not exist
        if (currentvalue != leftvalue && currentvalue != rightvalue)
        {
            return mid;
        }

        // duplicate exist in left index
        if (mid - 1 >= 0 && currentvalue == leftvalue)
        {
            int pairStartingIndex = mid - 1;
            if (pairStartingIndex & 1)
            { // pair starting index is odd
                // i am standing at right part.
                //.. ans exist at left direction
                e = mid - 1; // go to left side
            }
            else
            { // pairs starting index is even hai
                // i am standing at left part.
                // move to right side
                s = mid + 1;
            }
        }

        // duplicate exist in right index
        else if (mid + 1 < n && currentvalue == rightvalue)
        {
            int pairStartingIndex = mid;
            if (pairStartingIndex & 1)
            { // pair starting index is odd
                // i am standing at right part.
                //.. ans exist at left direction

                e = mid - 1; // go to left side
            }
            else
            { // pairs starting index is even hai
                // i am standing at left part.
                // move to right side
                s = mid + 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3};
    int n = arr.size();

    int oddElement = findOddOccurringElement(arr, n);
    cout << "Odd occurring index (binary-method): " << oddElement << endl;
    cout << " odd occurining element=" << arr[oddElement];
}
