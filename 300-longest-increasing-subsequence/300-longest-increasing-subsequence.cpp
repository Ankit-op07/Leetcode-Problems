class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();
        
        int ans=INT_MIN;
        
        vector<int>dp(n,-1);
        
        for(int i=0;i<n;i++){
            ans=max(ans,  helper(i,nums,dp));
        }
        
        return ans;
      
        
    }
    
    int helper(int i,vector<int>&nums,vector<int>&dp){
        int ans=1;
        
        if(dp[i]!=-1) return dp[i];
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j]){
                ans=max(ans,helper(j,nums,dp)+1);
            }
        }
        return dp[i]=ans;
    }
    
    
};