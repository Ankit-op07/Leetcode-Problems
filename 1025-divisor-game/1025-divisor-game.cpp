class Solution {
public:
    int dp[1001];
    
     int fun(int n){
         
         if(n == 1){
            return dp[1] = 0;
         }
         
         for(int i=1;i<n;i++){
             
             if(n%i==0){
                 
                 if(dp[n-i]!=-1 && dp[n-1]==0){
                     return dp[n]=1;
                 }
                 
                 
                 if(fun(n-i)==0){
                     return dp[n]=1;
                     
                 }
             }
         }
         return dp[n]=0;
         
         
        
    }
    
    bool divisorGame(int n) {
        memset(dp,-1,sizeof dp);
       return fun(n);

    }
    
   
    
    
   
};