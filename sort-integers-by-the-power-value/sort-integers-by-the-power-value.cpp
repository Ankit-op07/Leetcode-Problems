class Solution {
public:
    int power(int n){
        int count=0;
        int i=n;
        while(i!=1){
            if(i%2==0){
                i/=2;
                count++;
            }else{
                i=3*i+1;
                count++;
            }
        }
        return count;
    }
    int getKth(int lo, int hi, int k) {
        
        vector<int>v;
        for(int i=lo;i<=hi;i++){
            v.push_back(i);
        }
        vector<vector<int>>p;
        for(int i=0;i<v.size();i++){
            int pwr= power(v[i]);
            vector<int>v1;
            v1.push_back(pwr);
            v1.push_back(v[i]);
            p.push_back(v1);
        }
        sort(p.begin(),p.end());
        return p[k-1][1];
    }
};