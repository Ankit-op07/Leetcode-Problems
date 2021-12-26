class Solution {
public:
   const int N=1e5+10;
       const int INF=1e9+10;
    int dizkstra(int source, vector<pair<int,int>> g[],int n){
        
        vector<int>vis(N, 0);

    vector<int>dist(N,INF);

    set<pair<int,int>>st; 

    st.insert({0,source});

    dist[source]=0;

    while(st.size()>0){

        auto node = *st.begin();
       
        int v=node.second;
        int dist_v=node.first;
         st.erase(st.begin());
        if(vis[v])continue;
        vis[v]=1;

        for(auto child:g[v]){ //g[v] is a pair
            int child_v=child.first;
            int wt=child.second;
            
           
            if(dist[v]+wt<dist[child_v]){
               dist[child_v]=dist[v]+wt;
                 st.insert({dist[child_v],child_v});
            }
        }
    }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==INF)return-1;
            ans=max(ans,dist[i]);
        }
        return ans;
        
    }
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>g[N];
        for(auto vec:times){
            int v=vec[0];
            int u=vec[1];
            int wt=vec[2];
            g[v].push_back({u,wt});
        }
        
        return dizkstra(k,g,n);
    }
};