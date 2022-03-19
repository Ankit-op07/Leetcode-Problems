class Solution {
public:
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        unordered_set<int>st;
        
        for(int i=0;i<edges.size();i++){
            st.insert(edges[i][1]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};