class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>st;
        
        int s=0;
        int ans=INT_MIN;
        for(int e=0;e<nums.size();e++){
            // if(st.empty()){
                st.insert(nums[e]);
                
            int mini=*st.begin();
            int maxi=*st.rbegin();
            
            int diff=maxi-mini;
            
            if(diff>limit){
                // st.erase(nums[s]);
auto it=st.find(nums[s]);
                st.erase(it);
                s++;
            }
            // cout<<s<<" "<<e<<endl;
            ans=max(ans,e-s+1);
        // st.insert(nums[e]);
             
        }
        return ans;
        
        
    }
};