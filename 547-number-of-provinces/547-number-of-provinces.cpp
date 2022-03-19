class Solution {
public:
    
    void dfs(int vertex,vector<int> adj[],int visited[]){
        
        if(visited[vertex]) return;
        
        visited[vertex]=true;
        
        for(auto child:adj[vertex]){
            if(visited[child]) continue;
            
            dfs(child,adj,visited);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adj[n+1];
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(isConnected[i-1][j-1] && i!=j){
                      adj[i].push_back(j);
                }
            }
        }
        // for(auto ve:adj){
        //     for(int i=0;i<ve.size();i++){
        //         cout<<ve[i]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        int visited[10000]={false};
        int count=0;
        for(int i=1;i<=n;i++){
            if(visited[i]) continue;
            dfs(i,adj,visited);
                count++;
        }
       
        
     return count;   
    }
};