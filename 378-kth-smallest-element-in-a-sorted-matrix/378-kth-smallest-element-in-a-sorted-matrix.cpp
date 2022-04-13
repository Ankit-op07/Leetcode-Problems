class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
    priority_queue<int, vector<int>, greater<int> > pq;
    int m=matrix.size();
    int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                pq.push(matrix[i][j]);
            }
        }
        int p=1;
        while(p<k){
            pq.pop();
            p++;
        }
        return pq.top();
    }
};