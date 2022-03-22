class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int x=target[0];
            int y=target[1];
        int dist=abs(x)+abs(y);
        for(auto v:ghosts){
            int x1=v[0];
            int y1=v[1];
            int d=abs(x-x1)+abs(y-y1);
            if(d<=dist){
                return false;
            }
        }
        return true;
    }
};