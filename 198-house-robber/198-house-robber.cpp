class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=nums[0];
        
        for(int i=2;i<=n;i++){
            int pick=nums[i-1]+dp[i-2];
            int non_pick=dp[i-1];
            dp[i]=max(pick,non_pick);
        }
        return dp[n];
    }
};