class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0]=1;
        
        for(int i=1;i<n;i++){
            int ans=1;
            for(int j=0;j<i;j++){
                 if(nums[i]>nums[j]){
                ans=max(ans,dp[j]+1);
            }
            }
            dp[i]=ans;
        }
      return *max_element(dp.begin(),dp.end());
    }
        
        
        
        
        
//        int n=nums.size();
        
//         int ans=INT_MIN;
        
//         vector<int>dp(n,-1);
        
//         for(int i=0;i<n;i++){
//             if(dp[i]!=-1){
//                 ans=max(ans,dp[i]);
//             }else{
//                 ans=max(ans,  helper(i,nums,dp));
//             }
            
//         }
        
//         return ans;
      
        
    
    
//     int helper(int i,vector<int>&nums,vector<int>&dp){
//         int ans=1;
        
//         if(dp[i]!=-1) return dp[i];
//         for(int j=0;j<i;j++){
//             if(nums[i]>nums[j]){
//                 ans=max(ans,helper(j,nums,dp)+1);
//             }
//         }
//         return dp[i]=ans;
//     }
    
    
};