class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pat) {
        
        vector<string>ans;
         for(auto str:words){
             
             if(str.size()!=pat.size()) continue;
             bool ok =true;
             unordered_map<char,char>mpp;
             unordered_map<char,char>mpp2;
             for(int i=0;i<str.size();i++){
                 if(mpp.find(pat[i])!=mpp.end()){
                     if(mpp[pat[i]]!=str[i]) ok=false;
                 }
                 if(mpp2.find(str[i])!=mpp2.end()){
                     if(mpp2[str[i]]!=pat[i]) ok=false;
                 }
                 mpp[pat[i]]=str[i];
                 mpp2[str[i]]=pat[i];
             }
     if(ok){
         ans.push_back(str);
     }
       }
        return ans;
    }
};