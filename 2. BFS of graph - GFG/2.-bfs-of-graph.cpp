// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    void bfs(vector<int> adj[],int root,vector<int>&ans,vector<int>&visited){
        
        if(visited[root]) return;
        queue<int>q;
        visited[root]=1;
        q.push(root);
        ans.push_back(root);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            for(auto child:adj[node]){
                if(visited[child]) continue;
                q.push(child);
                ans.push_back(child);
                visited[child]=1;
            }
        }
        
        
        
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    
    vector<int>ans;
    vector<int>visited(100000);
    
    for(int i=0;i<V;i++){
     
         bfs(adj,0,ans,visited);
    }
    
    return ans;
   
    
    
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends