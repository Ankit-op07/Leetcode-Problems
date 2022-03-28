class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
     int res=nums[0];
    int sum=0;
        int curr_max=nums[0];
        for(int i=0;i<n;i++){
             sum+=nums[i];
            curr_max=max(nums[i],sum);
            if(curr_max>sum){
                sum=curr_max;
            }
           
            res=max(res,curr_max);
        }
        return res;
    }
    
};

