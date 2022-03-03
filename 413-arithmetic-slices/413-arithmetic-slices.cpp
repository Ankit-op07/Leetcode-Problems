class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n-2;i++){
            int cnt=1;
           int diff=nums[i+1]-nums[i];
            for(int j=i;j<n-1;j++){
                int d=nums[j+1]-nums[j];
                if(d==diff){
                    cnt++;
                }else{
                    break;
                }
                if(cnt>=3)  ans++;
            }
        }
        return ans;
    }
};