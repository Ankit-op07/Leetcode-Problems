class Solution {
public:
    
    
  
    
    int numSplits(string s) {
        unordered_set<char>st;
        
        vector<int>pre;
        
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            pre.push_back(st.size());
        }
        
        st.clear();
        
        vector<int>suff;
        
        for(int i=s.size()-1;i>=0;i--){
              st.insert(s[i]);
            suff.push_back(st.size());
        }
        
        reverse(suff.begin(),suff.end());
        
        int count=0;
        
        for(int i=0;i<pre.size()-1;i++){
            if(pre[i]==suff[i+1]){
                count++;
            }
        }
        return count;
        
        
    }
};