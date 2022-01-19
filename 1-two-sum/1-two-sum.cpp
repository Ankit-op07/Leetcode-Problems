class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int,int> m;
       int l=nums.size();
        // for(int i=0;i<l-1;i++)
        // {
        //     m[nums[i]]=i;
        // }
        //W will store values while traversing the array
        for(int i=0;i<l;i++)
        {
            int x = target-nums[i];
            if(m.find(x)!=m.end()){
                
                v.push_back(i);
                v.push_back(m[x]);
               break;
                
            }else{
                 m[nums[i]]=i;
            }
           
            }
         return v;
        }

    };