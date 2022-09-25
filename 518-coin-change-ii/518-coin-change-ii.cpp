class Solution
{
    public:
    
 

        int change(int amount, vector<int> &coins)
        {
            int n= coins.size();
            
               int dp[n+1][amount+1];
            // memset(dp,-1,sizeof dp);
            for(int i=0;i<=amount;i++){
                dp[0][i] = 0;
            }
            
            for(int  i=0;i<=n;i++){
                dp[i][0] = 1;
            }
            
            for(int i=1;i<=n;i++){
                for(int j=1;j<=amount;j++){
                    
                    if(coins[i-1]<=j){
                        dp[i][j] = dp[i][j-coins[i-1]]+dp[i-1][j];
                    }else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
            }
            

          
            
           return  dp[n][amount];
        }

//     int fun(vector<int> coins, int amount, int n)
//     {

//       if(n==0) return dp[n][amount]=0;
//         if(amount==0) return dp[n][amount]=1;
        
//         if(dp[n][amount]!=-1){
//             return dp[n][amount];
//         }
//         if(coins[n-1]<=amount){
            
//             return dp[n][amount]=fun(coins,amount-coins[n-1],n) + fun(coins,amount,n-1);
//         }else{
//             return dp[n][amount]=fun(coins,amount,n-1);
//         }
//     }
};