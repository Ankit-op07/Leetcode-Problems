class Solution {
public:
//   void solve(vector<int>ip,set<vector<int>> &ans,vector<int>op){
        
//         if(ip.size()==0){
//             ans.insert(op);
//             return ;
//         }
        
//         vector<int>op1=op;
        
//             vector<int>op2=op;
//         //op1.push_back()
//         op2.push_back(ip[0]);
//         ip.erase(ip.begin()+0);
        
//         solve(ip,ans,op1);
//         solve(ip,ans,op2);
//         return;
//     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // set<vector<int>>ans;
        // vector<int>op;
        //   sort(nums.begin(),nums.end());
        // solve(nums,ans,op);
        //  vector<vector<int>>v;
        // for(auto x:ans){
        //     v.push_back(x);
        // }
        // return v;
        set<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
         vector<vector<int>>res;
        vector<int>k;
        res.push_back(k);
        fun(0,nums,temp,res);
       
        
        // for(auto p:ans){
        //     res.push_back(p);
        // }
        
        return res;
    }
    
    void fun(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
        
        if(ind==nums.size()){
       
            return;
        }
        
        
        for(int i=ind;i<nums.size();i++){
            if(i==ind || i>ind && nums[i]!=nums[i-1]){
                temp.push_back(nums[i]);
                  ans.push_back(temp);
                fun(i+1,nums,temp,ans);
                temp.pop_back();
                 // fun(i+1,nums,temp,ans);
            }
        }
        
        // temp.push_back(nums[i]);
        // fun(i+1,nums,temp,ans);
        // temp.pop_back();
        // fun(i+1,nums,temp,ans);
        
    }
};