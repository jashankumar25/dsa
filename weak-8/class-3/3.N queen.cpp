#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> rowcheck;
unordered_map<int, bool> lowerdiagcheck;
unordered_map<int, bool> upperdiagcheck;

void storeSolution(vector<vector<string>> &ans, vector<vector<char>> &board, int n)
{
    vector<string> tempAns;
    for (int i = 0; i < n; i++)
    {
        string output = "";
        for (int j = 0; j < n; j++)
        {
            output.push_back(board[i][j]);
        }
        // string is ready
        tempAns.push_back(output);
    }
    // vector of string  is ready
    ans.push_back(tempAns);
}
bool issafe(int row, int col)

{
    // brute force -> transverse boars ->t.c.->N*2
    // check row
    if (rowcheck[row] == true)
    {
        // not safe
        return false;
    }
    // check for upper diagonal
    if (upperdiagcheck[row - col] == true)
    {
        // not safe
        return false;
    }
    // check for lower diagonal
    if (lowerdiagcheck[row + col] == true)
    {
        // not safe
        return false;
    }
    // else -valid space hai -safe
    return true;
}

void solve(int n, vector<vector<char>> &board, vector<vector<string>> &ans, int col)
{
    if (col >= n) // base case
    {
        // all queens are placed.
        // store board arrangement in the ans;
        storeSolution(ans, board, n);
        return;
    }
    // 1 case hum solve karega and baaki recussion kar ga..
    // mere pass col ka index and
    // uss column me konsi row me queen ko place krna hai
    // yo yaha decide krre hai

    for (int row = 0; row < n; row++)
    {
        // hr row pr queen ko place krke dekhuga..
        if (issafe(row, col))
        {
            board[row][col] = 'Q'; // single comm...q
            rowcheck[row] = true;
            lowerdiagcheck[row + col] = true;
            upperdiagcheck[row - col] = true;

            // baaki recussion sambala lega  -recussion
            solve(n, board, ans, col + 1);

            // backtracking
            board[row][col] = '.';
            rowcheck[row] = false;
            lowerdiagcheck[row + col] = false;
            upperdiagcheck[row - col] = false;
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;

    // board
    vector<vector<char>> board(n, vector<char>(n, '.'));

    // start placing queen with 0th column
    int col = 0;
    solve(n, board, ans, col);
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of queens: ";
    cin >> n;

    vector<vector<string>> result = solveNQueens(n);

    cout << "Total solutions: " << result.size() << "\n";
    for (auto &board : result)
    {
        for (auto &row : board)
        {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
