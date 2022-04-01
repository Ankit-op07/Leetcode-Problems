class Solution {
public:
    bool fun(int i,vector<int>&nums,vector<int>&dp){
        if(i==nums.size()-1){
            return dp[0]=true;
        }
        if(dp[i]!=-1) return dp[i];
        int ans=false;
        
        for(int j=i+1;j<=i+nums[i];j++){
            if(fun(j,nums,dp)){
                ans=true;
                break;
            }
        }
        return dp[i]=ans;
        
    }
    bool canJump(vector<int>& nums) {
     int n=nums.size();
        vector<int>dp(n+1,-1);
        return fun(0,nums,dp);
    }
    
    
};