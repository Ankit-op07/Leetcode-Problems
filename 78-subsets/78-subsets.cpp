class Solution {
public:
    
 
    vector<vector<int>> subsets(vector<int>& nums) {
       int length=nums.size();
         vector<vector<int>> ans;
        int subset_length=pow(2,length);
        for(int i=0;i<subset_length;i++){
            vector<int>v;
            int k=length;
            int temp=i;
            while(k>0){
                if(temp&1==1){
                    v.push_back(nums[length-k]);
                  
                }
                 temp=temp/2;
                k-=1;
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};