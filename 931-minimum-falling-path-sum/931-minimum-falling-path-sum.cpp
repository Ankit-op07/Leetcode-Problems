class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // vector<vector<int>>dp(n,vector<int>(n,0));
        
        vector<int> prev(n,0) , cur(n,0);
       
        
        // initialized first row
        for(int i=0;i<n;i++){
            // cout<<matrix[0][i];
          prev[i]=matrix[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                
                int ld=INT_MAX;int rd=INT_MAX;
                  int s=matrix[i][j]+prev[j];
                if(j-1>=0){
                 ld=matrix[i][j]+prev[j-1];
                }
                if(j+1<n){
                     rd=matrix[i][j]+prev[j+1];
                }
                
               cur[j]=min(s,min(ld,rd));
            }
            prev=cur;
        }
        
        int ans=prev[0];
        
        for(int i=1;i<n;i++){
       
              ans=min(ans,prev[i]);
        }
        return ans;
        
    

        
    }
};