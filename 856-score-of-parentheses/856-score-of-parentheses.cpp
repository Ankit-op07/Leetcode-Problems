class Solution {
public:
    
    int scoreOfParentheses(string s) {
//          stack<char>st;
//         int i=0;
//         int ans=0;
//         while(i<s.size()){
            
//             if(i!=s.size()-1 && s[i]=='(' && s[i+1]==')'){
//                 ans++;
//                 i+=2;
//             }else if(s[i]=='('){
//                 st.push('(');
//                 i++;
//             }else if(s[i]==')'){
//                 ans*=2;
//                 st.pop();
//                 i++;
//             }
//         }
//         return ans;
        int cnt=0;
        int i=0;
        int ans=0;
         while(i<s.size()){
            
            if(i!=s.size()-1 && s[i]=='(' && s[i+1]==')'){
               if(cnt==0){
                   ans++;
               }else{
                   ans +=pow(2,cnt);
               }
                i+=2;
            }else if(s[i]=='('){
              cnt++;
                i++;
            }else if(s[i]==')'){
               cnt--;
                i++;
            }
        }
        return ans;
        
    }
};