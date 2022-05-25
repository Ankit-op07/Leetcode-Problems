class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         vector<vector<int>>ans;
//         for(int i=0;i<n-2;i++){
//             if(i==0 || nums[i]!=nums[i-1]){
//             for(int j=i+1;j<n-1;j++){
//                 if(j==i+1 || nums[j]!=nums[j-1]){
//                 int l = j+1;
//                 int h=n-1;
//                 int t=-(nums[i]+nums[j]);
//                 bool done = false;
//                 while(l<=h){
//                     int mid=l+(h-l)/2;
                    
//                     if(nums[mid]==t){
//                         // temp.push_back(nums[mid]);
//                         done=true;
//                         break;
//                     }else if(nums[mid]>t){
//                         h=mid-1;
//                     }else{
//                         l=mid+1;
//                     }
//                 }
//                 if(done){
//                       vector<int>temp;
//                     temp.push_back(nums[i]);
//                     temp.push_back(nums[j]);
//                     temp.push_back(t);
    
//                     ans.push_back(temp);
    
    
//                 }
//             }
//             }
//         }
//         }
//         return ans;
//     }
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i==0 || nums[i]!=nums[i-1]){
            int sum=-nums[i];
            
            int l=i+1;
            int h=n-1;
            
            
            while(l<h){
                if(nums[l]+nums[h]<sum){
                    l++;
                }else if(nums[l]+nums[h]>sum){
                    h--;
                }else{
                    vector<int>temp;
                   temp.push_back(nums[i]); 
                      temp.push_back(nums[l]);
                      temp.push_back(nums[h]);
                    ans.push_back(temp);
                     while ( l<h && nums[l]==nums[l+1]) l++;
                while (l<h && nums[h]==nums[h-1]) h--;
                l++; h--;
                    
                    
                }
            }
        }
        }
     return ans;   
    }
        
   
    
    
    
};