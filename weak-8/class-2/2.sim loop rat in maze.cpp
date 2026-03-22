#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    bool issafe(int nextx,int nexty,vector<vector<int>>& maze,int n,vector<vector<bool>> &visited)
    {
        if(nextx<0||nexty<0||nextx>=n||nexty>=n)
        {
            return false; // out of bound
        }
        if(visited[nextx][nexty]==true)
        {
            return false; // already visited
        }
        if(maze[nextx][nexty]==0)
        {
            return false; // blocked
        }
        return true;
    }
 
    void solve(vector<vector<int>>& maze,int n,vector<vector<bool>> &visited,
              vector<string>& ans,int srcx,int srcy,int destx,int desty,string output)
    {
        if(srcx==destx && srcy==desty)
        {   
            ans.push_back(output);
            return;
        }
        
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        char move[]={'U','D','L','R'};
        
        for(int i=0;i<4;i++)
        {
            int nextx=srcx+dx[i];
            int nexty=srcy+dy[i];
            char movement=move[i];
            
            if(issafe(nextx,nexty,maze,n,visited))
            {
                visited[nextx][nexty]=true;
                output.push_back(movement);
                solve(maze,n,visited,ans,nextx,nexty,destx,desty,output);
                output.pop_back();
                visited[nextx][nexty]=false; // backtrack
            }
        }
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<string> ans;
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        
        int srcx=0;
        int srcy=0;
        int destx=n-1;
        int desty=n-1;
        
        if(maze[srcx][srcy]==0)
        {
            return {};
        }
        
        visited[0][0]=true;
        string output="";
        solve(maze,n,visited,ans,srcx,srcy,destx,desty,output);
        
        sort(ans.begin(), ans.end()); // sort lexicographically
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter size of maze (n): ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    cout << "Enter maze grid (0=blocked, 1=open):\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> maze[i][j];
        }
    }

    Solution sol;
    vector<string> paths = sol.ratInMaze(maze);

    if(paths.empty()) {
        cout << "-1\n"; // no path exists
    } else {
        cout << "Possible paths:\n";
        for(string &p : paths) {
            cout << p << " ";
        }
        cout << "\n";
    }
    return 0;
}
