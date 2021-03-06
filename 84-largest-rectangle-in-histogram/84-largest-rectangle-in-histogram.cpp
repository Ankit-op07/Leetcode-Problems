class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
       stack<int>st;
      vector<int>temp;
      for(int i=n-1;i>=0;i--){
          if(st.empty()){
              temp.push_back(n);
          }else if(!st.empty() && arr[st.top()]>=arr[i]){
              
              while(!st.empty() && arr[st.top()]>=arr[i]){
                  st.pop();
              }
              
              if(st.empty()){
                  temp.push_back(n);
              }else{
                  temp.push_back(st.top());
              }
          }else if(!st.empty() && arr[st.top()]<arr[i]){
              temp.push_back(st.top());
          }
          
          
          
          st.push(i);
          
      }
      
      reverse(temp.begin(),temp.end());
     
      while(!st.empty()) st.pop();
        
        vector<int>temp2;
        
        for(int i=0;i<n;i++){
            if(st.empty()){
                temp2.push_back(-1);
            }else if(!st.empty() && arr[st.top()]<arr[i]){
                temp2.push_back(st.top());
            }else if(!st.empty() && arr[st.top()]>=arr[i]){
                
                
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    st.pop();
                }
                 if(st.empty()){
                  temp2.push_back(-1);
              }else{
                  temp2.push_back(st.top());
              }
                
            }
            
            st.push(i);
        }
        
      
        // cout<<temp.size()<<" "<<temp2.size();
        
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            int right=temp[i];
            int left=temp2[i];
            ans=max(ans,arr[i]*(right-left-1));
        }
        return ans;
        
        
    }
};