class Solution {
public:
    
    void solve( vector<vector<int>>&ans,vector<int>&temp,vector<int>nums,set<int>st){
       
        
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        
        
        
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()) continue;
                temp.push_back(nums[i]);
            st.insert(nums[i]);
                solve(ans,temp,nums,st);
            st.erase(nums[i]);
                temp.pop_back();
                
            
        }
        
        
        
        
        }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int>temp;
       set<int>st;
         solve(ans,temp,nums,st);
         return ans;
        
    }
    

};