class Solution {
public:
    bool canPlaceFlowers(vector<int>& s, int k) {
        int count=0;
        int n=s.size();
        
        if(n==1 and s[0]==0){
            if(k<=1) return true;
            
            return false;
        }
        
        if(n==2 && s[0]==0 && s[1]==0){
            if(k<=1) return true;
            
            return false;
        }
        
        
        for(int i=0;i<s.size();i++){
            if(i==0 && s[i]==0 && s[i+1]==0){
                count++;
                s[i]=1;
            }
             else if(i==n-1 && s[i]==0 && s[i-1]==0){
                count++;
                s[i]=1;
            }else if( i>0 && i<n && s[i]==0 && s[i-1]==0 && s[i+1]==0){
                     count++;
                     s[i]=1;
                 }
                 
             
        }
        if(count>=k) return true;
        
        return false;
    }
};