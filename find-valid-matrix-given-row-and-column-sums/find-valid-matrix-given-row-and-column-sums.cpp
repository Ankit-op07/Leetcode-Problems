class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();
            vector<vector<int>> vec( n , vector<int> (m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int r=rowSum[i];
                int c=colSum[j];
                if(r<=c){
                    vec[i][j]=r;
                    colSum[j]-=r;
                     rowSum[i]-=r;
                }else{
                    vec[i][j]=c;
                    rowSum[i]-=c;
                     colSum[j]-=c;
                }
            }
        }
        return vec;
           
    }
};