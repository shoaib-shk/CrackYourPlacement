class Solution {
public:

    int activeNeighbour(vector<vector<int>>& board, int i, int j) {
        int count = 0;
        int m = board.size();
        int n = board[0].size();
        
        // Directions for the 8 possible neighbors
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1},
         {1, -1},   {1, 1}, {-1, 1}};
        
        for (auto& d : directions) {
            int newRow = i + d.first;
            int newCol = j + d.second;
            
            // Boundary check: only count neighbors inside the grid
            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) {
                if (abs(board[newRow][newCol]) == 1) { 
                    count++;
                }
            }
        }
        
        return count;
    }
    void updateMatrix(vector<vector<int>>&board){
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(board[i][j] == -1) board[i][j] = 0;
                if(board[i][j] == 2) board[i][j] = 1;
            }
        }
    }
    void gameOfLife(vector<vector<int>>& board) {
        int a;
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                a = activeNeighbour(board,i,j);
                if(board[i][j] == 1){
                    
                    if(a < 2 || a > 3 ){
                        board[i][j] = -1;
                    }

                }else{
                    if( a == 3){
                        board[i][j] = 2;
                    }
                }
            }
        }

        updateMatrix(board);
    }
};