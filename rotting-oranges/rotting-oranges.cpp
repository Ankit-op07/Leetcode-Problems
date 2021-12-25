class Solution {
public:
    
    // to check if the given index is valid or not
    bool isValid(int x,int y,int n,int m){
        return x>=0 && y>=0 && x<n && y<m;
    }
     // to check if the given index is valid or not
    
    //movements in the matrix
    vector<pair<int,int>>movements ={
        {-1,0},{1,0},{0,1},{0,-1}
    };
     //movements in the matrix
    
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()){
            return 0;
        }
    int n=grid.size();
    int m=grid[0].size();
    
    int cnt_o=0;
    int cnt_r=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==2 || grid[i][j]==1){
                    cnt_o++;
                }
                if(grid[i][j]==2){
                    cnt_r++;
                    q.push({i,j});
                }
                
            }
        }
        
        int ans=0;
        
       
        
        
    int cnt=0;
            while(!q.empty() ){
                int k=q.size();
                cnt+=k;
                while(k--){
                
                
                
                pair<int,int> r = q.front();
            int x=r.first;
            int y = r.second;
           q.pop();
              
            for(auto movement : movements){
                int X = movement.first +x;
                int Y = movement.second +y;
                
                if(isValid(X,Y,n,m)){
                if(grid[X][Y]==1){
                  
                 
                    q.push({X,Y});
                    grid[X][Y]=2;
                    
                }
                }
            }
                }
                
               if(!q.empty()){
                   ans++;
               }
            }
           
        
        
        
    if(cnt_o==cnt){
        return ans;
    }
        return -1;
        
   
    }
};