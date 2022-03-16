class Solution {
public:
    int row, col;
    int dx[8] = {-1,-1,0,1,1,1,0,-1};
    int dy[8] = {0,1,1,1,0,-1,-1,-1};
    
        bool isok(int x, int y) { return x>=0 && x<row && y>=0 && y<col; }
    
    void Reveal(vector<vector<char>>& board, int x, int y){
        
        queue<pair<int,int>>q;
        q.push({x,y});
        
        while(!q.empty()){
            
            int x1=q.front().first;
            int y1=q.front().second;
            q.pop();
            
            if(board[x1][y1]!='E') continue;
            
            int mines=0;
            vector<pair<int,int>>temp;
            for(int i=0;i<8;i++){
              
                int X=x1+dx[i];
                int Y=y1+dy[i];
                if(isok(X,Y)){
                    
                    if(board[X][Y]=='M'){
                    mines++;
                }else if(board[X][Y]=='E'){
                   temp.push_back({X,Y});
                }
                }
            }
            
            if(!mines){
                for(auto p:temp){
                    q.push(p);
                }
                board[x1][y1]='B';
            }else{
                board[x1][y1]=char(mines+48);
            }
            
            
            
        }
    }
    
   
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        
         row = board.size(), col = board[0].size();
        int x = click[0], y = click[1];
        
        if(board[x][y]=='M'){
            board[x][y]='X';
            return board;
        }
        Reveal(board, x, y);
        
        return board;
    
    }
};