class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<pair<int,vector<int>>>mpp;
        for(auto vec:points){
            int x=vec[0];
            int y=vec[1];
            int dist=x*x + y*y;
            
           mpp.push_back({dist,vec});
        }
        sort(mpp.begin(),mpp.end());
        vector<vector<int>> res;
        
        for(auto p:mpp){
            if(k==0) break;
            res.push_back(p.second);
             k--;
            cout<<mpp.size();
        }
        return res;
    }
};