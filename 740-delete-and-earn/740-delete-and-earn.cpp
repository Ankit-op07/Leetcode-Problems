class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        vector<int>sums(10005,0);
        
        for(int i=0;i<nums.size();i++){
            sums[nums[i]]+=nums[i];
        }
        
        vector<int>dp(10005,-1);
        dp[1]=sums[1];
        dp[2]=max(sums[1],sums[2]);
        
        for(int i=3;i<10005;i++){
            dp[i]=max(dp[i-1],sums[i]+dp[i-2]);
        }
        return dp[10004];
    }
                   
    

};