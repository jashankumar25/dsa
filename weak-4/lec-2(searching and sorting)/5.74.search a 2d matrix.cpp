
#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int columns = matrix[0].size();

    int s = 0;
    int n = rows * columns;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // mid ka use karkek 2d array
        // me rowindex and colindex final karenge
        int rowindex = mid / columns;
        int colindex = mid % columns;

        if (matrix[rowindex][colindex] == target)
        {
            return true;
        }
        else if (matrix[rowindex][colindex] < target)
        {
            s = mid + 1; // right
        }
        else
        {
            e = mid - 1; // left
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target=16;

    bool found = searchMatrix(matrix, target);

    if (found)
        cout << "Target " << target << " *found* in the matrix." << endl;
    else
        cout << "Target " << target << " *NOT found* in the matrix." << endl;

    return 0;
}
