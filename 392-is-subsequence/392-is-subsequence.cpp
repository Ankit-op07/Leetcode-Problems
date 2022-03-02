class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(!s.size()) return true;
        
        
        int  in=0;
        
        for(int i=0;i<t.size();i++){
            if(in==s.size()) return true;
            if(t[i]==s[in]){
                in++;
            }
        }
         if(in==s.size()) return true;
        
        return false;
    }
};