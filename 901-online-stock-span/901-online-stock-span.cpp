class StockSpanner {
public:
   vector<int>stocks;
    stack<int>st;
    vector<int>ans;
    int ind;
    
    
    StockSpanner() {
        ind =0;
    }
    
    int next(int price) {
        stocks.push_back(price);
        
        
        
        if(st.empty()){
           ans.push_back(1);
        }else if(!st.empty() && stocks[st.top()]>price){
             ans.push_back(ind-st.top());
        }else if(!st.empty() && stocks[st.top()]<=price){
            while(!st.empty() && stocks[st.top()]<=price){
                st.pop();
            }
            
            if(st.empty()){
                 ans.push_back(ind+1);
            }else{
                 ans.push_back(ind-st.top());
            }
        }
        
        st.push(ind);
        ind++;
        return ans[ind-1];
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */