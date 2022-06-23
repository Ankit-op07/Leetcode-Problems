class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     vector<int>index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
            index.push_back(i);
            }
        }
        int ans=0;
        for(int i=k-1;i<index.size();i++){
            int a;
            if(i!=index.size()-1){
                a=index[i+1]-index[i];
            }else{
                a=nums.size()-index[i];
            }
            
            int j=i-k+1;
            
            int b;
            if(j==0){
                b=index[j]+1;
            }else{
                b=index[j]-index[j-1];
                 // cout<<nums[j]<<" "<<nums[j-1]<<endl;
            }
            // cout<<a<<" "<<b<<endl;
            ans += a*b;
            
        }
        return ans;
    }
};