class Solution {
public:
    int minSwaps(string s) {
       int closing=0;
        int opening=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                if(opening==0){
                    closing++;
                }else{
                    opening-=1;
                }
            }else{
                opening++;
            }
        }
         return (closing-(closing/2));
    }
};