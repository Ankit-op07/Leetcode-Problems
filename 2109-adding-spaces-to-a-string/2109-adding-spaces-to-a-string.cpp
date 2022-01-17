class Solution {
public:
    string addSpaces(string str, vector<int>& spaces) {
        
        string ans;
        int count=0;
        
        int k=0;
        for(int i=0;i<str.size();i++){
             if(k<spaces.size() && count==spaces[k]){
               k++;
               char ch =' ';
                 ans.push_back(ch);
            }
            count++;
             ans.push_back(str[i]);  
        }
        
        return ans;
        
        

        
    }
};