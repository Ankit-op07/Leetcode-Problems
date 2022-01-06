class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
        int l=0;
        int h=n-1;
        int ans=INT_MIN;
        
        while(l<=h){
        int area= (h-l)*(min(height[l],height[h]));
            ans=max(ans,area);
            if(height[l]<height[h]){
                l++;
            }else{
                h--;
            }
        }
        return ans;
        
    }
};