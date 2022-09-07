class Solution {
public:
    void reverse(vector<vector<int>>&v){
          int n=v.size();
        int left=0;
        int right=n-1;
        while(left<right){
            
            for(int i=0;i<n;i++){
                swap(v[i][left],v[i][right]);
            }
            left++;right--;
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        
       int n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        reverse(matrix);
        
        
        
        
        
    }
};