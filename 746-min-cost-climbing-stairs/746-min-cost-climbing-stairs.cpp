class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // return fun(cost,n,n);
        
        vector<int>dp(n,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
        
    }
    
    int fun(vector<int>&cost,int n,int k){
        if(n==0){
            return cost[0];
        }else if(n==1){
            return cost[1];
        }
        
        int k1= fun(cost,n-1,k);
        int k2= fun(cost,n-2,k);
        cout<<k1<<" "<<k2;
        
        if(n==k){
            return min(k1,k2);
        }else{
            return min(k1,k2)+cost[n];
        }
        
    }
    
    
};