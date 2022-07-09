class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1){
            return 0;
        }
        int start =0;
        int end = n-1;
        
        while(start<end){
            int mid = start + (end - start)/2;
            
            if(mid!=start && mid!=end){
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                    return mid;
                }else if(nums[mid]<nums[mid-1]){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }else if(mid == start){
                if(nums[mid]>nums[mid+1]){
                    return mid;
                }else{
                    start = mid+1;
                }
            }else{
                if(nums[mid]>nums[mid-1]){
                    return mid;
                }else{
                    end = mid-1;
                }
            }
            
        }
        return start;
    }
};