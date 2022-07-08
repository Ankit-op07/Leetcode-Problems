class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        sort(products.begin(),products.end());
        
        string str="";
        for(int i=0;i<searchWord.size();i++){
            str+=searchWord[i];
            vector<string>v;
            for(int j=0;j<products.size();j++){
                if(i<products[j].size() && products[j].substr(0,i+1)==str){
                    v.push_back(products[j]);
                }
                if(v.size()==3){
                   
                    break;
                }
            }
             ans.push_back(v);
        }
        return ans;
        
    }
};