class Solution {
public:
    
  
    
    bool canJump(vector<int>& nums) {
     int n=nums.size();
    vector<bool>dp(n,false);
    
        dp[n-1]=true; // 4->true
        
        for(int i=n-2;i>=0;i--){
            // 0
            int ans=false;
            //jumps
            for(int j=i+1;j<=i+nums[i];j++){
               if(dp[j]){
                   ans=true;
                   break;
               } 
            }
            dp[i]=ans; //3->true;
        }
        
        return dp[0];
        
    }
    
    
};