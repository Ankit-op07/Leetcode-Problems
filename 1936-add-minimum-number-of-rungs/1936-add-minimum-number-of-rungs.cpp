class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int prev =0;
        int ans=0;
        for(int i=0;i<rungs.size();i++){
            int diff = rungs[i]-prev;
            if(diff>dist){
                if(diff%dist==0){
                    ans=ans+diff/dist-1;
                }else{
                      ans =ans+ diff/dist;
                }
              
            }
            prev=rungs[i];
        }
        return ans;
    }
};