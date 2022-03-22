class Solution {
public:
//     string getSmallestString(int n, int k) {
//         int total=n*26;
        
// string alphabet="aabcdefghijklmnopqrstuvwxyz";
        
//         string ans;
//         for(int i=0;i<n;i++){
//             int diff=total-k;
//             if(diff>=26){
//                 ans.push_back(alphabet[1]);
//                 total-=26;
//                 k-=1;
//             }else{
//                 int d=total-k;
//                 int ind=26-d;
//                 ans.push_back(alphabet[ind]);
//                 k-=ind;
//                 total-=26;
//             }
//         }
//         return ans;
//     }
    string getSmallestString(int n, int k) {
    string res = string(n, 'a');
    k -= n;
    while (k > 0) {
        res[--n] += min(25, k);
        k -= min(25, k);
    }
    return res;
}
};