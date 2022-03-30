class Solution {
public:
    bool search(vector<int>v,int target){
        int n=v.size();
        int l=0;
        int h=n-1;
        while(l<=h){
        int mid=l+(h-l)/2;
            if(v[mid]==target){
                return true;
            }else if(v[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
    }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(); //number of rows
        int n=matrix[0].size();//number of columns
        int i=0;
        int j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]==target){
                return true;
            }else if(matrix[i][j]>target){
                j--;
            }else {
                i++;
            }
        }
        return false;
    }
        
        
        
        
        
        
        
        
        
        
        /*
        for(int i=0;i<m;i++){
            
            if(search(matrix[i],target)==true){
                return true;
            }
        }
        return false;
    }
    */
};