class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     
        
        // At first i will find an element wich is less than to it's next element
        int n= nums.size();
        
        int ind=-1;
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind =i;
                break;
            }
        }
        
        // then again i will traverse from right to left and find a number which is slighly greater than the number on index ind.
        
        if(ind!=-1){
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[ind]){
                int temp = nums[i];
                nums[i]=nums[ind];
                nums[ind]=temp;
                break;
            }
        }
        }
        
        // now i will reverse the subarray which is in the right of the index ind.
        reverse(nums.begin()+ind+1,nums.end());
        
    }
};