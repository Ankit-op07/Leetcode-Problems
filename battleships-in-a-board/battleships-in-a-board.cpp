class Solution {
public:
      void dfs(int i,int j,vector<vector<char>>& grid){
     
         int n=grid.size();
         int m=grid[0].size();

        //Boundry conditions
        if(i<0 or j<0)return;
        if(i>=n or j>=m)return;
        
        //Return if already visited
        if( grid[i][j]!='X') return ;
        // mark it true if it is not visited
        grid[i][j]='.';
        //
       //go to four directions
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        //
    }
    int countBattleships(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                
                dfs(i,j,grid);
                ans++;   
                } 
            }
        }
        return ans;
    }
};