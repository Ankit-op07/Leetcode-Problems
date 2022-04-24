class StockSpanner {
public:
  stack<pair<int,int>>st;
  int ind;  
    
    
    StockSpanner() {
        ind =0;
    }
    
    int next(int price) {
       int ans=0;
        
        if(st.empty()){
             ans = ind+1;
        }else if(!st.empty() && st.top().second>price){
            ans = ind-st.top().first;
        }else if(!st.empty() && st.top().second<=price){
            
            while(!st.empty() && st.top().second<=price){
                st.pop();
            }
            
            if(st.empty()){
                ans=ind+1;
            }else{
                ans = ind-st.top().first;
            }
        }
        
        st.push({ind,price});
        ind++;
        
        return ans;
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */