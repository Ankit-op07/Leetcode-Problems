class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            unordered_set<int>row;
        unordered_set<int>col;
        int m=matrix.size();
        int n= matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        // vector<vector<int>>temp(m,vecotr<int>(n,0));
        
        for(int i=0;i<matrix.size();i++){
        
            for(int j=0;j<matrix[0].size();j++){
                // temp[i][j]=matrix[i][j];
                if(row.find(i)!=row.end()){
                    matrix[i][j]=0;
                }
                 if(col.find(j)!=col.end()){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};