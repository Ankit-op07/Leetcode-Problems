class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size(); 
        
        vector<vector<int>>final(m,vector<int>(n,0));
        final=grid;
        while(k--){
        vector<vector<int>>ans(m,vector<int>(n,0));
            
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==m-1 && j==n-1){
                    ans[0][0]=grid[i][j];
                }else if(j==n-1){
                    ans[i+1][0]=grid[i][j];
                }else{
                    ans[i][j+1]=grid[i][j];
                }
            }
        }
            grid=ans;
            final=ans;
        }
        return final;
    }
};