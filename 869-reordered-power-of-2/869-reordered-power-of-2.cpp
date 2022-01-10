class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<string>s;
        string p=to_string(n);
        sort(p.begin(),p.end());
        int len=p.size();
        for(int i=0;i<30;i++){
            int x=pow(2,i);
            string st=to_string(x);
            sort(st.begin(),st.end());
            s.push_back(st);
        }
        
        
     for(auto str:s){
         if(len==str.size()){
             if(p==str){
                 return true;
             }
         }
     }
        return false;
    }
};