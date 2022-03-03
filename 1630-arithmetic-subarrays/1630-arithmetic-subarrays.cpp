class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
     
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            int j = l[i];
            int k=  r[i];
            
            vector<int>temp;
            for(int num=j;num<=k;num++){
                temp.push_back(nums[num]);
                
            }
            sort(temp.begin(),temp.end());
           int diff=temp[1]-temp[0];
            bool check=true;
            for(int m=0;m<temp.size()-1;m++){
                if((temp[m+1]-temp[m])!=diff) check=false;
            }
            if(check){
                ans.push_back(true);
            }else{
                  ans.push_back(false); 
            }
            
        }
        return ans;
       
    }
};