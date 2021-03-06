// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
   int dx[8] = {-1,-1,0,1,1,1,0,-1};
    int dy[8] = {0,1,1,1,0,-1,-1,-1};
    
    bool valid(int x,int y,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        if(x>=0 && x<n && y>=0 && y<m){
            return true;
        }
        return false;
    }
    void dfs(int x,int y,vector<vector<char>>& grid){
       
            grid[x][y]='0';
        
        
        for(int i=0;i<8;i++){
            int X=x+dx[i];
            int Y=y+dy[i];
            if(valid(X,Y,grid) && grid[X][Y]=='1'){
                dfs(X,Y,grid);
            }
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(grid[i][j]=='1'){
                     dfs(i,j,grid);
                     count++;
                 }
             }
        }
        return count;
        
       
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends