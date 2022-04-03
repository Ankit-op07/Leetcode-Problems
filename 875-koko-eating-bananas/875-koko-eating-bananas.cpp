class Solution {
public:
    
    bool fun(int mid,vector<int>pi,int h){
        
        int count=0;
        
        for(int i=0;i<pi.size();i++){
            if(pi[i]>=mid){
                count+=pi[i]/mid;
                if(pi[i]%mid!=0){
                    count+=1;
                }
            }else{
                count+=1;
            }
        }
        if(count<=h){
            return true;
        }
        return false;
    }
    
    int minEatingSpeed(vector<int>& pi, int h) {
       int l=1;
        int r=*max_element(pi.begin(),pi.end());
        
        while(l<=r){
            int mid=l+(r-l)/2;
            
            bool ok = fun(mid,pi,h);
            
            if(ok){
                  r=mid-1;
               
            }else{
               l=mid+1;
            }
        }
        return l;
    }
};


