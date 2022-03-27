class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        
        int rows=grid.size();
        int cols=grid[0].size();
        
        if(grid[0][0]==1 || grid[rows-1][cols-1]==1) return 0;
        
        vector<vector<int>>dp(rows,vector<int>(cols,-1));
       
         dp[0][0]=1;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(i==0 && j==0) continue;
                int up=0;
                int left=0;
                
                if(i>0 && grid[i-1][j]!=1){
                    up=dp[i-1][j];
                }
                if(j>0 && grid[i][j-1]!=1){
                    left=dp[i][j-1];
                }
                
                dp[i][j]=up+left;
            }
        }
        
        return dp[rows-1][cols-1];
         // return fun(rows-1,cols-1,obstacleGrid,dp);
    }
    
    
//     int fun(int i,int j,vector<vector<int>>& grid,vector<vector<int>> &dp){
        
        
//         if(i==0 && j==0){
//             if(grid[i][j]==1){
//                 return 0;
//             }else{
//                 return 1;
//             }
//         }
        
//         if(i<0 || j<0 || grid[i][j]==1) return 0;
        
//         if(dp[i][j]!=-1) return dp[i][j];
//         int up=fun(i-1,j,grid,dp);
//         int left=fun(i,j-1,grid,dp);
        
//         return dp[i][j]=up+left;
//     }
};