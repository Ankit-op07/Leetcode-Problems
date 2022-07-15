class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
         vector<int>v;
        for(int i=0;i<nums.size();i++){
            int num = target-nums[i];
            if(mpp.find(num)!=mpp.end()){
               v.push_back(i);
                v.push_back(mpp[num]);
                break;
            }
            mpp[nums[i]]=i;
        }
        return v;
    }
};