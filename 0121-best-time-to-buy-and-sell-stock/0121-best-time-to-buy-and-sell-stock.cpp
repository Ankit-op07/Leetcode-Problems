class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tillMin=INT_MAX;
        int ans =0;
        
        for(int i=0;i<prices.size();i++){
            ans = max(prices[i]-tillMin,ans);
            tillMin=min(prices[i],tillMin);
        }
        
        return ans == INT_MAX ? 0 : ans;
        
    }
};