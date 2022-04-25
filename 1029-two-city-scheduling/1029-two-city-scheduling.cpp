class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
    multimap<int,pair<int,int>>mpp;
     
        for(int i=0;i<costs.size();i++){
            int diff = costs[i][1]-costs[i][0];
            mpp.insert({diff,{costs[i][0],costs[i][1]}});
            // mpp[diff] = {costs[i][0],costs[i][1]};
            
        }
        
        int ans=0;
        int n=costs.size();
        int i=0;
        
//         for(auto m :mpp){
//             cout<<m.first<<" "<<m.second.first<<","<<m.second.second<<endl;
//         }
        
        
       for(auto m : mpp){
           if(i<n/2){
               ans+=m.second.second;
           }else{
               ans+=m.second.first;
           }
        i++;
       }
        
        return ans;
    }
};