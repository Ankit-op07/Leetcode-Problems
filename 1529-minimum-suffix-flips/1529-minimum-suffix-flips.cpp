class Solution {
public:
    int minFlips(string target) {
        
        bool flag=true;
        int count=0;
        
        for(int i=0;i<target.size();i++){
            if(flag && target[i]=='1'){
                count++;
                flag=false;
            }else if(!flag && target[i]=='0'){
                count++;
                flag=true;
            }
        }
        return count;
    }
};