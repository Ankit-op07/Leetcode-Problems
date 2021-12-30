class Solution {
public:
    int smallestRepunitDivByK(int k) {
      
        if(k%2==0 || k%5==0){
            return -1;
        }
        
    int count=0;
        int num=k;
        while(num!=0){
            count++;
            num=num/10;
        }
        
        int itr=count;
        int target=0;
        while(itr--){
            target=target*10+1;
        }
        if(target%k==0){
            return count;
        }
        target=target*10+1;
        count+=1;
        
        int rem=target%k;
        while(rem!=0){
            target=rem*10+1;
              count++;
            rem=target%k;
          
        }
        return count;
        
        
      
    }
};