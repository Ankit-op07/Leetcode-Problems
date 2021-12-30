class Solution {
public:
   int compute(int i) {
    return i < 2 ? 0 :
        1 + (i % 2 ? compute(i * 3 + 1) : compute(i / 2));
    }
    int getKth(int lo, int hi, int k) {
        
        vector<int>v;
        for(int i=lo;i<=hi;i++){
            v.push_back(i);
        }
        vector<vector<int>>p;
        for(int i=0;i<v.size();i++){
            int pwr= compute(v[i]);
            vector<int>v1;
            v1.push_back(pwr);
            v1.push_back(v[i]);
            p.push_back(v1);
        }
        sort(p.begin(),p.end());
        return p[k-1][1];
    }
};