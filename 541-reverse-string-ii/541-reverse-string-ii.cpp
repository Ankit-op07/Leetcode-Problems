class Solution {
public:
    string reverseStr(string s, int k) {
       
        for(int i=0;i<s.size();i+=2*k){
            auto it = s.begin()+i+k > s.end() ? s.end() : s.begin()+i+k ;
            reverse(s.begin()+i,it);
        }
        return s;
    }
};