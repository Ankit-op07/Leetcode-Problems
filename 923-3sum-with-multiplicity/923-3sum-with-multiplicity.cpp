class Solution {
public:
   
    
    int threeSumMulti(vector<int>& arr, int target) {
      unordered_map<int,int>mpp;
        int ans=0,mod=1e9+7;
        for(int i=0;i<arr.size();i++){
            ans =(ans + mpp[target-arr[i]])%mod;
            
            for(int j=0;j<i;j++){
                mpp[arr[i]+arr[j]]++;
            }
        }
        return ans;
        
    }
  
};