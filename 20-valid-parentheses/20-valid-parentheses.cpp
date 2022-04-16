class Solution {
public:
   
    bool isValid(string str) {
     stack<char>st;
        for(int i=0;i<str.size();i++){
          
             if(!st.empty() && st.top()=='(' && str[i]==')'){
                st.pop();
            }else if(!st.empty() && st.top()=='{' && str[i]=='}'){
                st.pop();
            }else if(!st.empty() && st.top()=='[' && str[i]==']'){
                st.pop();
            }else{
                 st.push(str[i]);
             }
        }
        
        return st.empty();
    }
};