class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
    priority_queue <int, vector<int>, greater<int>> pq; 
        int mod=1e9+7;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
      
        while(k--){
         int p= pq.top();
            pq.pop();
            p+=1;
            pq.push(p);
        }
        long long int ans=1;
        while(!pq.empty()){
            int x = pq.top();
            ans = ((ans%mod)*(x%mod))%mod;
            pq.pop();
        }
        return ans;
    }
};