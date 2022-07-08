class Solution {
public:
    
    int fun(vector<int>&dp,int n){
        
        if(n==1){
            return dp[1];
        }else if(n==2){
            return dp[2];
        }
       
        
        if(dp[n]!=-1){
            return dp[n];
        }
        return  dp[n] = fun(dp,n-1)+fun(dp,n-2); 
    }
    
    
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
    vector<int>dp(n+1,-1);
         dp[1]=1;
        dp[2]=2;
       return fun(dp,n);
//        if(n==1){
//            return 1;
//        }else if(n==2){
//            return 2;
//        }
        
//         return climbStairs(n-1)+climbStairs(n-2); 
    }
};