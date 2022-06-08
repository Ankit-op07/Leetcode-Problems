class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
      int size=0;
      int start=0;
        int ans=0;
    for(int i=0;i<nums.size();i++){
         
            if(nums[i]>=left && nums[i]<=right){
                size=i-start+1;
                ans+=size;
            }else if(nums[i]<left){
                ans+=size;
            }else if(nums[i]>right){
                start=i+1;
                size=0;
            }
        }
        return ans;
    }
};