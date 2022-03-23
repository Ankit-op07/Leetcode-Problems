class Solution {
public:
   
    
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<int>comb={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        
        int index=0;
        vector<int>temp;
        getCombination(index,comb,temp,ans,n,k);
        return ans;
    }
    
    void getCombination(int ind,vector<int>&comb,vector<int>&temp, vector<vector<int>>&ans,int n,int k){
        
        
//         if(ind==comb.size()){
//             if(!n && temp.size()==k){
//                 ans.push_back(temp);
//             }
//             return;
//         }
        
//         if(comb[ind]<=n){
//             temp.push_back(comb[ind]);
//             getCombination(ind+1,comb,temp,ans,n-comb[ind],k);
//             temp.pop_back();
//         }
        
//         getCombination(ind+1,comb,temp,ans,n,k);
        
        if(!n && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<comb.size();i++){
            
            if(comb[i]<=n){
                temp.push_back(comb[i]);
                getCombination(i+1,comb,temp,ans,n-comb[i],k);
                temp.pop_back();
            }
        }
        
    }
};