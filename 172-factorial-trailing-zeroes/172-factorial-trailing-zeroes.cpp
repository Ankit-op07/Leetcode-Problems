class Solution {
public:
    int trailingZeroes(int n) {
      
        int ans=0;
        
        for(int i=1;i<=n;i++){
            int count=0;
            int k=i;
           
            while(k%10==0){
                k/=10;
                count++;
            }
            
            
            while(k%5==0){
                k/=5;
                count++;
            }
            
             ans+=count;
        }
       return ans;
    }
};