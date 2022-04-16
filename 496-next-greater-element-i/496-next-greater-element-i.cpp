class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
      vector<int>temp;
        stack<int>st;
    
        for(int i=n-1;i>=0;i--){
            if(st.empty()) temp.push_back(-1);
            else if(!st.empty() && st.top()>nums2[i])
                temp.push_back(st.top());
            else if(!st.empty() && st.top()<=nums2[i]){
                while(!st.empty() && st.top()<=nums2[i]){
                    st.pop();
                }
                
                if(st.empty()){
                    temp.push_back(-1);
                }else{
                    temp.push_back(st.top());
                }
            }
            st.push(nums2[i]);
        }
        reverse(temp.begin(),temp.end());
        
        unordered_map<int,int>mpp;
        
        for(int i=0;i<n;i++){
            mpp[nums2[i]]=temp[i];
        }
        
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++){
            int x= nums1[i];
            ans.push_back(mpp[x]);
        }
        return ans; 
    }
};