class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int num1=-1;
        int num2=-1;
        int c1=0;
        int c2=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(num1 == nums[i]) c1++;
            else if(num2 == nums[i]) c2++;
            else if(c1==0){
                num1=nums[i];
                c1=1;
            }else if(c2==0){
                num2=nums[i];
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        
        int freq1=0,freq2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){
                freq1++;
            }else if(nums[i]==num2){
                freq2++;
            }
        }
        
        int n=nums.size();
        vector<int>ans;
        if(freq1>n/3){
            ans.push_back(num1);
        }
        if(freq2>n/3){
            ans.push_back(num2);
        }
        return ans;
    }
};