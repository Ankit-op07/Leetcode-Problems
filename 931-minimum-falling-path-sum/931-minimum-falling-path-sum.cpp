class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        // initialized first row
        for(int i=0;i<n;i++){
            // cout<<matrix[0][i];
            dp[0][i]=matrix[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                
                int ld=INT_MAX;int rd=INT_MAX;
                  int s=matrix[i][j]+dp[i-1][j];
                if(j-1>=0){
                 ld=matrix[i][j]+dp[i-1][j-1];
                }
                if(j+1<n){
                     rd=matrix[i][j]+dp[i-1][j+1];
                }
                
                dp[i][j]=min(s,min(ld,rd));
            }
        }
        
        int ans=dp[n-1][0];
        
        for(int i=1;i<n;i++){
        //   for(int j=0;j<n;j++){
        //       cout<<dp[i][j]<<" ";
        //   }
        //     cout<<endl;
        // }
              ans=min(ans,dp[n-1][i]);
        }
        return ans;
        
        
//             int n = A.size();
// 		// Creating a dp matrix. This is the STL way to do it.
//         vector<vector<int>> dp(n, vector<int>(n, 0));
        
// 		// Populate the DP matrix for the first row.
//         for(int i=0;i<dp.size();i++){
//             dp[0][i] = A[0][i];
//         }
        
// 		// Loop for the rest of the DP matrix.
//         for(int i=1; i<n;i++){
//             for(int j=0;j<n;j++){
// 				// INT_MAX is chosen because then that variable won't be taken into consideration at the time of **main step.**
//                 int prevCol = (j>=1) ? dp[i-1][j-1] + A[i][j]: INT_MAX;
//                 int nextCol = (j<n-1) ? dp[i-1][j+1] + A[i][j]: INT_MAX;
//                 int sameCol = dp[i-1][j] + A[i][j];
//                 dp[i][j] = min(prevCol, min(nextCol, sameCol));    // MAIN STEP
//             }
//         }
        
// 		// Calucating the minimum value for the last row becuase that is what we want.
//         int ans = INT_MAX;
//         for(int j=0;i<n;j++){
//             ans = min(ans, dp[n-1][j]);
//         }
        
//         return ans;
        
    }
};