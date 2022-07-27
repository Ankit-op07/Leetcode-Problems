class Solution {
public:
    int minPartitions(string n) {
        
        if(n=="0"){
            return 1;
        }
        
        char c='0';
        
        for(int i=0;i<n.size();i++){
            if(n[i]>c){
                c=n[i];
            }
        }
        stringstream ss;
        ss<<c;
        int k;
        ss>>k;
        return k;
    }
};