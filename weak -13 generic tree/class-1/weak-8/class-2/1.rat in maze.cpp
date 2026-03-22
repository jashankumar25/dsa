#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool issafe(int newx, int newy, vector<vector<int>> &m, vector<vector<bool>> &visited, int n)
    {
        if (newx < 0 || newy < 0 || newx >= n || newy >= n)
        { // out of bound
            return false;
        }
        if (visited[newx][newy] == true)
        { // already visited
            return false;
        }
        if (m[newx][newy] == 0)
        { // path blocked
            return false;
        }
        // valid case
        return true;
    }

    void solve(vector<vector<int>> &m, int n, vector<string> &ans,
               vector<vector<bool>> &visited, int srcx, int srcy,
               int destx, int desty, string output)
    {

        // base case
        if (srcx == destx && srcy == desty)
        { // rat reached final destination
            // store output string ko ans me
            ans.push_back(output);
            return;
        }

        // Order must be D, L, R, U (to match lexicographic order)
        // 1 case hum solve karenge , baaki recursion sambhal lega
        //  1 case -> up, down, left, right

        // Down -> i+1, j
        int newx = srcx + 1;
        int newy = srcy;
        if (issafe(newx, newy, m, visited, n))
        {
            visited[newx][newy] = true;
            output.push_back('D');
            solve(m, n, ans, visited, newx, newy, destx, desty, output);
            output.pop_back();
            visited[newx][newy] = false; // backtracking
        }

        // Left -> i, j-1
        newx = srcx;
        newy = srcy - 1;
        if (issafe(newx, newy, m, visited, n))
        {
            visited[newx][newy] = true;
            solve(m, n, ans, visited, newx, newy, destx, desty, output + "L");
            // wapas aaunga, toh visited toh revert krna padefga
            // backtracking
            visited[newx][newy] = false;
        }

        // Right -> i, j+1
        newx = srcx;
        newy = srcy + 1;
        if (issafe(newx, newy, m, visited, n))
        {
            visited[newx][newy] = true;
            solve(m, n, ans, visited, newx, newy, destx, desty, output + "R");
            visited[newx][newy] = false;
        }

        // Up -> i-1, j
        newx = srcx - 1;
        newy = srcy;
        if (issafe(newx, newy, m, visited, n))
        {
            visited[newx][newy] = true;
            solve(m, n, ans, visited, newx, newy, destx, desty, output + "U");
            visited[newx][newy] = false;
        }
    }

    vector<string> ratInMaze(vector<vector<int>> &m)
    {

        int n = m.size(); // find size
        vector<string> ans;
        vector<vector<bool>> visited(n, vector<bool>(n, 0));
        /// rat k row and column index k liye niche wale 2 variable le rha hu
        int srcx = 0;
        int srcy = 0;

        int destx = n - 1;
        int desty = n - 1;

        // important case
        if (m[0][0] == 0)
        {
            // rat ki starting postion agar blocked hai
            return ans;
        }
        // MAIN YHA PR GALTI KRTA HU
        // start me RAT (0,0) pr hoga, that why visited true mark karo
        visited[0][0] = true; // mark starting cell visited
        string output = "";
        solve(m, n, ans, visited, srcx, srcy, destx, desty, output);

        return ans;
    }
};

int main()
{
    int n;
    cin >> n; // input size of maze

    vector<vector<int>> maze(n, vector<int>(n));

    // input maze
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    Solution obj;
    vector<string> result = obj.ratInMaze(maze);

    if (result.empty())
    {
        cout << "-1\n"; // no path found
    }
    else
    {
        sort(result.begin(), result.end()); // lexicographic order
        for (auto &path : result)
        {
            cout << path << " ";
        }
        cout << endl;
    }
    return 0;
}
