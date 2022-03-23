class Solution {
public:
    
//     void solve(vector<vector<int>>&ans,vector<int>&temp,int target,vector<int>&cand,int k){
//              if(target==0){
//             ans.push_back(temp);
//                  return;
//         }
        
//         for(int i=k;i<cand.size();i++){
           
//             if(i>k && cand[i]==cand[i-1]) {continue;}
            
//             if(cand[i]>target){
//                 break;
//             }
            
//                 temp.push_back(cand[i]);
//                 solve(ans,temp,target-cand[i],cand,i+1);
//                 temp.pop_back();
                 
            
//             }
              
//             }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//        sort(candidates.begin(),candidates.end());
//         vector<vector<int>> ans;
//         vector<int>temp;
//         solve(ans,temp,target,candidates,0);
       
//         return ans;
         sort(candidates.begin(),candidates.end());
        
        vector<int>temp;
      
        vector<vector<int>>ans;
        getCombination(0,candidates,target,temp,ans);
        
    
        return ans;
    }
    
void getCombination(int ind,vector<int>&cand,int target,vector<int>&temp,  vector<vector<int>>&ans){

//     if(i==cand.size()){
       
//         if(target==0){
       
//            ans.insert(temp);
//         }
//         return;
//     }
    
//     if(cand[i]<=target){
//         temp.push_back(cand[i]);
//          getCombination(i+1,cand,target-cand[i],temp,ans);
//         temp.pop_back();
//     }
    
//      getCombination(i+1,cand,target,temp,ans);
// }
    int n=cand.size();
    
    if(!target){
        ans.push_back(temp);
    }
    
    for(int i=ind;i<n;i++){
        if(i==ind || i>ind && cand[i]!=cand[i-1] ){
        if(cand[i]<=target){
            temp.push_back(cand[i]);
              getCombination(i+1,cand,target-cand[i],temp,ans);
            temp.pop_back();
        }
        }
    }
}
        
    
};