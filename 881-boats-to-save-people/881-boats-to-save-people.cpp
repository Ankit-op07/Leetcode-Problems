class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
      sort(p.begin(),p.end());
      int l=0;
      int r=p.size()-1;
        int count=0;
        while(l<r){
            int sum=p[l]+p[r];
            if(sum<=limit){
                count++;
                l++;
                r--;
                }else{
                count++;
                r--;
            }
                   }
        if(l==r){
            count++;
        }
        return count;
    }
};