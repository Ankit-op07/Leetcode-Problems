class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
   map<int,int>mpp;
        int cap=0;
        
        for(int i=0;i<trips.size();i++){
            mpp[trips[i][1]]+=trips[i][0];
              mpp[trips[i][2]]+=-trips[i][0];
            
            // mpp.push_back({trips[i][1],trips[i][0]});
            // mpp.push_back({trips[i][2],-trips[i][0]});
        }
        
//         sort_by_first(mpp);
//        sort_by_first_type2(mpp);
        
        for(auto m:mpp){
            cap+=m.second;
            if(cap>capacity){
                return false;
            }
        }
    //        for(auto p:mpp){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
return true;
    }
    
 
    
//     void sort_by_first(vector<pair<int,int>>&v){ //1-5 2-4 3-6 like
// std::sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) {
//     return left.first < right.first  ;
// });
// }
    
// void sort_by_first_type2(vector<pair<int,int>>&v){// 1-6 1-3 1-1 like
// std::sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) {
//     return left.first==right.first && left.second < right.second ;
// });
// }

};