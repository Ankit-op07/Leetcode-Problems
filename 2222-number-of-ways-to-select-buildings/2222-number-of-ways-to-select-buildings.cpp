class Solution {
public:
    
    long long numberOfWays(string s) {
      vector<int>prev_one;
      vector<int>prev_zero;
      
        int sum_zero=0;
        int sum_one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                sum_zero+=1;
                prev_zero.push_back(sum_zero);
                prev_one.push_back(sum_one);
            }else{
                sum_one+=1;
                prev_one.push_back(sum_one);
                prev_zero.push_back(sum_zero);
            }
        }
        
        long long ans=0;
        int n =s.size();
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='0'){
                int a=prev_one[i];
                int b=prev_one[n-1]-prev_one[i];
                ans+=a*b;
            }else{
                int a=prev_zero[i];
                int b=prev_zero[n-1]-prev_zero[i];
                  ans+=a*b;
            }
        }
        return ans;
    }
};