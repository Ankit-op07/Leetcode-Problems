class Solution
{
    public:
    
    int dp[301][5001];

        int change(int amount, vector<int> &coins)
        {
            memset(dp,-1,sizeof dp);

            return fun(coins, amount, coins.size());
        }

    int fun(vector<int> coins, int amount, int n)
    {

      if(n==0) return dp[n][amount]=0;
        if(amount==0) return dp[n][amount]=1;
        
        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }
        if(coins[n-1]<=amount){
            
            return dp[n][amount]=fun(coins,amount-coins[n-1],n) + fun(coins,amount,n-1);
        }else{
            return dp[n][amount]=fun(coins,amount,n-1);
        }
    }
};