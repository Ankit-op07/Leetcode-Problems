class Solution {
public:
    bool CanDivide(int mid,vector<int>q,int n){
        int parts=0;
        for(int i=0;i<q.size();i++){
            int pro=q[i];
           parts+=pro/mid;
            if(pro%mid!=0){
                parts++;
            }
            
            }
        if(parts>n){
            return false;
        }
        return true;
        }
    
    int minimizedMaximum(int n, vector<int>& q) {
       if(n==q.size()){
          return *max_element(q.begin(),q.end());
      }
        
        int l=1;
        int h=*max_element(q.begin(),q.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            bool ok=CanDivide(mid,q,n);
            if(ok){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};