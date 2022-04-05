class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
      vector<int>v;
     stack<int> st;
        st.push(ast[0]);
        
        
        for(int i=1;i<ast.size();i++){
            if(st.empty()){
                st.push(ast[i]);
                continue;
            }
            int prev=st.top();
            if(ast[i]>0 && prev>0){
                st.push(ast[i]);
            }else if(ast[i]>0 && prev<0){
                st.push(ast[i]);
            }else if(prev>0 && ast[i]<0){ 
                int val=abs(ast[i]);
                bool p=true;
                while(!st.empty()){
                    
                    if(st.top()>0){
                        if(st.top()>val){
                            p=true;
                        break;
                    }else if(st.top()<val){
                          p=false;
                        st.pop();
                    }else{
                        p=true;    
                        st.pop();
                        break;
                    }
                    }else {
                      p=false;
                        break;
                    }
                }
                if(!p){
                    st.push(ast[i]);
                }
            }else if(ast[i]<0 && prev<0){
                st.push(ast[i]);
            }
        }
        
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
        
                   
};