class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int rows=obstacleGrid.size();
        int cols=obstacleGrid[0].size();
        
        vector<vector<int>>dp(rows,vector<int>(cols,-1));
         return fun(rows-1,cols-1,obstacleGrid,dp);
    }
    
    
    int fun(int i,int j,vector<vector<int>>& grid,vector<vector<int>> &dp){
        
        
        if(i==0 && j==0){
            if(grid[i][j]==1){
                return 0;
            }else{
                return 1;
            }
        }
        
        if(i<0 || j<0 || grid[i][j]==1) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        int up=fun(i-1,j,grid,dp);
        int left=fun(i,j-1,grid,dp);
        
        return dp[i][j]=up+left;
    }
};