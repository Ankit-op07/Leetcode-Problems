class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mpp;
        map<char,char>mpp2;
        for(int i=0;i<t.size();i++){
        if(mpp.find(t[i])!=mpp.end() || mpp2.find(s[i])!=mpp2.end()){
                if(s[i]!=mpp[t[i]]) return false;
            if(t[i]!=mpp2[s[i]]) return false;
            }else{
                mpp[t[i]]=s[i];
                mpp2[s[i]]=t[i];
            }
        }
        return true;
    }
};