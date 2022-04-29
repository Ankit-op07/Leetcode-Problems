class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>Max_dq;
        deque<int>Min_dq;
        
        int ans=INT_MIN;
        
       int s=0,e=0;
        
        while(e<nums.size()){
            while(!Max_dq.empty() && nums[Max_dq.back()]<nums[e]){
                Max_dq.pop_back();
            }
            
             while(!Min_dq.empty() && nums[Min_dq.back()]>nums[e]){
                Min_dq.pop_back();
            }
            
             Max_dq.push_back(e);
            Min_dq.push_back(e); 
             
            int diff=abs(nums[Max_dq.front()] - nums[Min_dq.front()]);
            
            if(diff>limit){
                s++;
                 if(!Max_dq.empty() && Max_dq.front()<s){
                Max_dq.pop_front();
            }
                 if(!Min_dq.empty() && Min_dq.front()<s){
                Min_dq.pop_front();
            }
                
                
            }
             ans=max(ans,e-s+1);
             
            e++;
          
             
        }
        return ans;
        
        
    }
};