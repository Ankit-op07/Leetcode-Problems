class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            st.push(nums[i]);
        }
       vector<int>arr = nums;
     vector<int>temp;
        for(int i=nums.size()-1;i>=0;i--){
            if(st.empty()) temp.push_back(-1);
            else if(!st.empty() && st.top()>nums[i]){
                temp.push_back(st.top());
            }
            else if(!st.empty() && st.top()<=nums[i]){
                
                while(!st.empty() && st.top()<=nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    temp.push_back(-1);
                }else {
                    temp.push_back(st.top());
                }
            }
            st.push(nums[i]);
        }
        reverse(temp.begin(),temp.end());
        
        return temp;
        
        
    }
};