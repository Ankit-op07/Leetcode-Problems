class Solution {
public:
    
    // 1.Top-Down Recursion
    
    int dp[10000]={0};
    int numSquares(int n) {
        if(n==0 || n==1) return dp[n]=n;
        if(dp[n]!=0) return dp[n];
      int ans=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int num=n-i*i;
            ans=min(ans,numSquares(num)+1);
        }
        return dp[n]=ans;
    }
    
};