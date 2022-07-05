class Solution {
public:
    int findDuplicate(vector<int> &nums){
         
        unordered_map<int,int>mpp;
        
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        for(auto m:mpp){
            if(m.second>1){
                return m.first;
            }
        }
        
        return 0;
        
    }
      
        
         
    
};