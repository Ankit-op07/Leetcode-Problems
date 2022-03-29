```
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
ans=min(ans,dp[n-1][i]);
}
return ans;
```