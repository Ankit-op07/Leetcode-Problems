class Solution {
public:
//     int dp[1001];
    
//      int fun(int n){
         
//          if(n == 1){
//             return dp[1] = 0;
//          }
         
//          for(int i=1;i<n;i++){
             
//              if(n%i==0){
                 
//                  if(dp[n-i]!=-1 && dp[n-1]==0){
//                      return dp[n]=1;
//                  }
                 
                 
//                  if(fun(n-i)==0){
//                      return dp[n]=1;
                     
//                  }
//              }
//          }
//          return dp[n]=0;
         
         
        
//     }
    
    bool divisorGame(int n) {
       //  memset(dp,-1,sizeof dp);
       // return fun(n);
        
        int dp[1001];
        memset(dp,-1,sizeof dp);
        
        dp[1]=0;
        
        for(int i=2;i<=n;i++){
            bool flag = false;
            for(int j=1;j<sqrt(i);j++){
                if(i%j==0){
                    if(dp[i-j]==0){
                        dp[i]=1;
                        flag = true;
                        break;
                    }
                }
            }
            if(!flag) dp[i]=0;
        }
        
        return dp[n];        

    }
    
   
    
    
   
};