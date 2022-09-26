class Solution
{
    public:

        int dp[13][10001];

    int NUM = 100000;

    int helper(vector<int> coins, int amount, int n)
    {

       	// Base case
        if (amount == 0) return dp[n][amount] = 0;

        if (n == 0) return dp[n][amount] = NUM;

       	// CHoice 
        if (dp[n][amount] != -1)
        {
            return dp[n][amount];
        }

        if (coins[n - 1] <= amount)
        {

            return dp[n][amount] = min(1 + helper(coins, amount - coins[n - 1], n), helper(coins, amount, n - 1));
        }
        else
        {
            return dp[n][amount] = helper(coins, amount, n - 1);
        }
    }

    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();
       	//         memset(dp,-1,sizeof dp);

       	//         int ans = helper(coins,amount,n);

       	//        return ans == NUM ? -1 : ans;

        int NUM = 100001;

        int dp[n + 1][amount + 1];

        for (int i = 0; i <= amount; i++)
        {
            dp[0][i] = NUM;
        }

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= amount; j++) {
                
                if(coins[i-1]<=j){
                    dp[i][j] = min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
     return dp[n][amount] == NUM ? -1 : dp[n][amount];
    }
};