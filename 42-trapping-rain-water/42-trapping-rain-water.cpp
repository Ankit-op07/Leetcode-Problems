class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        if(n<3){
            return 0;
        }
    
           int i=0;
        while(height[i]==0){
            i++;
        }
    
        
       
        int water=0;
        int ans=0;
     int last=height[i];
        i++;
        while(i<n){
           int current=height[i];
            
            if(current<last){
                water+=last-current;
                
            }else{
                ans+=water;
                water=0;
                last=current;
            }
            if(i==n-1 && height[i]<last){
                     while(height[i]==0){
            i--;
        }
                int l=height[i];
               
                  water=0;
            
                  while(height[i]!=last){
           int current=height[i];
            
            if(current<l){
                water+=l-current;
                
            }else{
                ans+=water;
                water=0;
                l=current;
            }
                
                
                 i--;
                  }
                 ans+=water;
               return ans;
            }
            i++;
        }
        return ans;
    }
};