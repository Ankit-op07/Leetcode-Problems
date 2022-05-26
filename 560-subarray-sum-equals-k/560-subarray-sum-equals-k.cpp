class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
    int count=0;int sum=0;
       
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            if(sum==k){
                count++;
            }
            mp[sum]++;
        }
        return count;
    }
};