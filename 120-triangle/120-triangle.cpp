class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int m=triangle.size();
    
        int ans=INT_MAX;
        vector<vector<int>>dp(m,vector<int>(m,-1));
        for(int i=0;i<m;i++){
             ans=min(ans,fun(m-1,i,triangle,dp));
        }
       
        return ans;
    }
    
    int fun(int i,int j,vector<vector<int>>&tri,vector<vector<int>>&dp){
        
        //Base case
        if(i==0 && j==0) return dp[i][j]=tri[0][0];
        if(j<0 || j>i) return INT_MAX;
        
      
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=tri[i][j] + min(fun(i-1,j,tri,dp),fun(i-1,j-1,tri,dp));
        
    }
};