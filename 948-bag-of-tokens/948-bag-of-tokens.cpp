class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        if(!tokens.size()) return 0;
        sort(tokens.begin(),tokens.end());
        int score =0;
        int l =0;
        int h=tokens.size()-1;
        
        if(power<=tokens[0]){
            return 0;
        }
        
        if(tokens.size()==1){
            if(power>=tokens[0]) return 1;
            
            return 0;
        }
        
        while(l<=h){
            // if(score<0){
            //     return 0;
            // }
            if(power>=tokens[l]){
                power -= tokens[l];
                score +=1;
                l++;
            }else{
                power += tokens[h];
                if(l!=h){
                score -=1;
                }
                
                h--;
            }
        }
        return score;
    }
};