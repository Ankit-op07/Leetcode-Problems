
class Solution {
public:

    
    
    
   
    
    int getKth(int lo, int hi, int k) {
        int comp[1001]={0};
        comp[1]=0;
        comp[2]=1;
        comp[3]=7;
        
        for(int i=4;i<=1000;i++){
            int count=0;
            int n=i;
            while(n!=1){
                if(n<=1000 && comp[n]!=0){
                    comp[i]=comp[n]+count;
                    break;
                }
              if(n%2==0){
                n/=2;
                count++;
            }else{
                n=3*n+1;
                count++;
            }   
            }
        }
        
        for(int i=0;i<50;i++){
            cout<<comp[i];
        }
        
        
        vector<int>v;
        for(int i=lo;i<=hi;i++){
            v.push_back(i);
        }
        vector<vector<int>>p;
        for(int i=0;i<v.size();i++){
            int pwr= comp[v[i]];
            vector<int>v1;
            v1.push_back(pwr);
            v1.push_back(v[i]);
            p.push_back(v1);
        }
        sort(p.begin(),p.end());
        return p[k-1][1];
    }
};