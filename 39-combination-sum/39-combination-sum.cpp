class Solution {
public:
//    void helper(vector<int>cd,int target,vector<int>&temp,vector<vector<int>>&ans,int index){
//        //Base case
//        if(index==cd.size()){
//             if(target==0){
//            ans.push_back(temp);
          
//        }
//            return ;
//        }
     
//        //Rcalls
//        //if include
//        if(cd[index]<=target){
//        temp.push_back(cd[index]);
//        helper(cd,target-cd[index],temp,ans,index);
//            temp.pop_back();
//        }
//        //if not include
//      helper(cd,target,temp,ans,index+1);
//    }
    
    void getCombination(int i,vector<int>&cand,int target,vector<int>&temp,vector<vector<int>>&res,int sum){
        int n=cand.size();
        
        //BASE CASE
        if(i==n || sum==target){
            if(sum==target){
                res.push_back(temp);
            }
            return;
        }
        
        temp.push_back(cand[i]); //we are going to add this element
        sum+=cand[i];
        if(sum<=target){  
            
            // but the sum should be less than target and if it is then i can again add the same element or if it is not then i would jump to the next index.
        getCombination(i,cand,target,temp,res,sum);
        }else{
            getCombination(i+1,cand,target,temp,res,sum);  
        }
        
        temp.pop_back();
        sum-=cand[i];
        // here i am not including the element so i must have to go to the next index but sum should be checked
        if(sum<=target){
        getCombination(i+1,cand,target,temp,res,sum);
        }
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //   vector<vector<int>> ans;
        // vector<int>temp;
        // int index=0;
        // helper(candidates,target,temp,ans,index);
        // return ans;
        
        vector<int>temp;
        vector<vector<int>> res;
        int sum=0;
        getCombination(0,candidates,target,temp,res,sum);
        
        return res;
        
    }
};