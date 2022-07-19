class Solution {
public:
    int minDeletions(string s) {
        int cnt=0;
        int mini=INT_MAX;
        unordered_map<char,int>mpp;
        
        for(auto c:s){
            mpp[c]++;
        }
       set<int>st;
        int count=0;
        int maxi=INT_MIN;
        for(auto m:mpp){
            int freq=m.second;
       
            if(st.find(freq)!=st.end()){
                int k=freq;
                while(k>0){
                    k--;
                    count++;
                    if(k!=0 && st.find(k)==st.end()){
                        st.insert(k);
                        break;
                    }
                }
            }else{
                st.insert(freq);
            }
        }
        return count;
        
    }
};