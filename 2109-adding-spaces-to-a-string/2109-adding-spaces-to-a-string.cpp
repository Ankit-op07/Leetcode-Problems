class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string ans;
        int n=spaces.size();
        int l=0;
        int r=0;
        
        while(l<s.size()){
            if(r<spaces.size() && l==spaces[r]){
                char ch=' ';
                ans.push_back(ch);
                r++;
            }
            ans.push_back(s[l]);
            l++;
        }
        return ans;
    }
};