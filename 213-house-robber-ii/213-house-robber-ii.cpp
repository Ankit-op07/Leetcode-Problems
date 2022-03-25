class Solution {
public:
      int solve(vector<int>& nums) {
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
    
    
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>vec=nums;
        vec.pop_back();
        int a=solve(vec);
        vec=nums;
        vec.erase(vec.begin());
        int b=solve(vec);
        
        return max(a,b);
        
        
    }
};