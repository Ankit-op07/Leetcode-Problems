class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        if(changed.size()%2 !=0){
            return ans;
        }
        
        sort(changed.begin(),changed.end());
        
   map<int,int>mpp;
        for(int i=0;i<changed.size();i++){
            mpp[changed[i]]++;
        }
        
        for(int i=0;i<changed.size();i++){
            if(mpp[changed[i]]==0) continue;
            
            if(mpp[changed[i]*2]==0) return {};
            
            ans.push_back(changed[i]);
            mpp[changed[i]]--;
            mpp[changed[i]*2]--;
        }
        return ans;
      
    }
};