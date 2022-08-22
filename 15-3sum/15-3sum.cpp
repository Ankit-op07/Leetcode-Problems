class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            set<vector<int>>st;
            sort(nums.begin(),nums.end());
            vector<vector<int>>ans;
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                if(i==0 || i!=0 && nums[i]!=nums[i-1]){
                int first = nums[i];
                int diff = -first;
                
                int low = i+1;
                int high = n-1;
               
               
            
                while(low<high){
                    int sum = nums[low]+nums[high];
                    if(sum<diff){
                        low++;
                    }else if(sum>diff){
                        high--;
                    }else{
                         vector<int>v;
                         v.push_back(first);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]);
                      st.insert(v);
                        low++;
                       
                    }
                }
                
                
            }
            }
            for(auto s:st){
                ans.push_back(s);
            }
            return ans;
        }
};