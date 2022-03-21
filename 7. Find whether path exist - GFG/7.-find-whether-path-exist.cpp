// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    bool valid(int x,int y,vector<vector<int>>& grid){
        int n=grid.size();
        return x>=0 && y>=0 && x<n && y<n;
    }
    
    void dfs(int x,int y,vector<vector<int>>& grid,bool &ans){
        
        
        for(int i=0;i<4;i++){
            int X=x+dx[i];
            int Y=y+dy[i];
            // if(vis[x][y]) continue;
            if(!valid(X,Y,grid)) continue;
            
            if(grid[X][Y]==0){
                continue;
            }else if(grid[X][Y]==2){
                ans=true;
                grid[X][Y]=0;
            }else if(grid[X][Y]==3){
                grid[X][Y]=0;
                 dfs(X,Y,grid,ans);
            }
           
            
           

        }
      
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
       int x,y;
       int n=grid.size();
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(grid[i][j]==1){
                   x=i;
                   y=j;
               }
           }
       }
       
       bool ans=false;
         dfs(x,y,grid,ans);
         return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends