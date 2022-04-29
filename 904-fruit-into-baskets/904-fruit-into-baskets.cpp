class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>mpp;
        
        int s=0;
        int ans=INT_MIN;
        for(int e=0;e<fruits.size();e++){
            mpp[fruits[e]]++;
            
            if(mpp.size()>2){
                if(mpp[fruits[s]]==1){
                    mpp.erase(fruits[s]);
                }else{
                    mpp[fruits[s]]--;
                }
                s++;
            }
            ans=max(ans,e-s+1);
        }
        return ans;
    }
};