class Solution {
public:
    string fun(string s,int n){
        if(n==4){
            return s;
        }
           string ans;
        int i=1;
        int count=1; //1112
    while(i<s.size()){
        if(s[i]==s[i-1]){
            count++;
        }else{
           
            stringstream ss;
            ss<<count;
            char c;
            ss>>c;
            
            ans.push_back(c);
            ans.push_back(s[i-1]);
             count=1;
        }
        
        i++;
        if(i==s.size()){
             stringstream ss;
            ss<<count;
            char c;
            ss>>c;
            ans.push_back(c);
            ans.push_back(s[i-1]);
        }
    }
        return fun(ans,n-1);
        
    }
    
    string countAndSay(int n) {
        
        if(n==1){
            return "1";
        }else if(n==2){
            return "11";
        }else if(n==3){
            return "21"; //count-value,count-value
        }
        
        return fun("1211",n);
       
       
       
        
    }
};