class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          int n=nums.size();
        if(nums.size()==0 || nums.size()==1){
            return nums.size();
        }
        
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
       
        int count=INT_MIN;
        int c=1;
      
        
        int l=100005;
        for(auto s:st){
            
           if(l==100005){
               l=s;
           }else{
               if(s==l+1){
                   c++;
                   l=s;
               }else{
                   c=1;
                   l=s;
               }
           }
            
            count=max(count,c);
        }
         
        return count;
    }
};