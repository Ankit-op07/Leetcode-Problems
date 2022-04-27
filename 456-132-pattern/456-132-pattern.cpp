class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       stack<int>st;
        
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--){
            
            while(!st.empty() && nums[i]>st.top() ){
                v.push_back(st.top());
            st.pop();
             }  
                st.push(nums[i]);
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                return true;
            }
        }
        return false;
    }
};