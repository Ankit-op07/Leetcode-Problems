class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mpp;
        for(int i=0;i<answers.size();i++){
            mpp[answers[i]]++;
        }
        int rabbits=0;
        for(auto m:mpp){
            int freq = m.second;
            int r = m.first;
            int x = r+1;
            rabbits=rabbits+(freq/x)*x;
           int rem = freq%x;
            if(rem){
                rabbits+=x;
            }
        }
        return rabbits;
      
    }
};