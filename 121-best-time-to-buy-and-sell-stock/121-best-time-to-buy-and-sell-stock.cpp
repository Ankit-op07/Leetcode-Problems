class Solution {
public:
    int maxProfit(vector<int>& A) {
    int mini=A[0];
        int res=0;
        for(int i=1;i<A.size();i++){
            if(A[i]>mini){ 
                res=max(res,A[i]-mini);
            }
            if(A[i]<mini){
                mini=A[i]; 
            }
        }
        return res;
       
    }
};