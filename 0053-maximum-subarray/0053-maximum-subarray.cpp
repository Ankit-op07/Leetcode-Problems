class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =0;
        bool c=true;
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                c= false;
            }
            sum+=nums[i];
            maxSum = max(sum,maxSum);
            if(sum < 0){
                sum=0;
            }
        }
        if(c){
            return *max_element(nums.begin(),nums.end());
        }
        return maxSum;
        
    }
};