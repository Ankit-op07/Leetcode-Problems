class Solution {
public:
    
    void dfs( int start,int target,vector<vector<int>>grid, vector<vector<int>>&ans,vector<int>&temp){
        
        if(start==target){
            ans.push_back(temp);
            return;
        }
       
        for(int i=0;i<grid[start].size();i++){
            int x =grid[start][i];
            temp.push_back(x);
            dfs(x,target,grid,ans,temp);
            temp.pop_back();
        }
        
        
        
        
    }
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& grid) {
        int t= grid.size();
        vector<vector<int>>ans;
        vector<int>temp;
        temp.push_back(0);
        dfs(0,t-1,grid,ans,temp);
        return ans;
    }
};