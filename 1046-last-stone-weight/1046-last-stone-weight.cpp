class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        multiset<int>st;
        int n=stones.size();
        for(int i=0;i<n;i++){
            st.insert(stones[i]);
        }
        
        while(st.size()>1){
        auto it=st.end();
            it--;
            auto max_it=it;
            int maxi=*it;
            it--;
            auto sec_it=it;
            int sec_maxi=*it;
            if(maxi==sec_maxi){
                st.erase(max_it);
                st.erase(sec_it);
            }else if(maxi!=sec_maxi){
              st.erase(max_it);
                st.erase(sec_it);
                st.insert(maxi-sec_maxi);
            }
        }
        if(st.size()==1){
            return *st.begin();
        }
        return 0;
    }
};