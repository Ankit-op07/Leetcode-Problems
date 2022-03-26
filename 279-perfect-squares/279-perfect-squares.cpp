class Solution {
public:
    
    // 1.Top-Down Recursion
    // 2.Memoization of Recursion
    // 3.Tabulation 
    // 4.Space optimization (if possible)
    
    
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            int ans=INT_MAX;
            for(int j=1;j*j<=i;j++){
                int num=i-j*j;
                ans=min(ans,dp[num]+1);
            }
            dp[i]=ans;
        }
        return dp[n];
        
      //   if(n==0 || n==1) return dp[n]=n;
      //   if(dp[n]!=0) return dp[n];
      // int ans=INT_MAX;
      //   for(int i=1;i*i<=n;i++){
      //       int num=n-i*i;
      //       ans=min(ans,numSquares(num)+1);
      //   }
      //   return dp[n]=ans;
    }
    
};