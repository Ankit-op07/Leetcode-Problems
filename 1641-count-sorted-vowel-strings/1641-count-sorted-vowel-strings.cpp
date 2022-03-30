class Solution {
public:
 
    int countVowelStrings(int n) {
        if(n==1) return 5;
      vector<int>arr={5,4,3,2,1};
        int ans;
        int t=1;
        while(t<n){
            int sum=0;
            for(int i=0;i<5;i++){
                sum+=arr[i];
            }
            ans=sum;
            vector<int>vec;
            
            for(int i=0;i<arr.size();i++){
                int s=0;
                for(int j=i;j<arr.size();j++){
                    s+=arr[j];
                }
                vec.push_back(s);
            }
            arr=vec;
        t++;
        }
        return ans;
        
    }
};