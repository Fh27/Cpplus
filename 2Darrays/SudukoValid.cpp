class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int num = 9;
       bool  row[num][num]={false};
        bool col[num][num]={false};
        bool grid[num][num]={false};
        for( int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    continue;
                }
                //means some number is present then find index and store and lastly mark them in 2d array
                int idx=board[i][j]-'0'-1;
                int gridnum=3*(i/3)+(j/3);
                //keeping track index wise in each 2d array
                if(row[i][idx] || col[j][idx] || grid[gridnum][idx]){
                    return false;
                }
                //if not then mark them true
                row[i][idx]=true;
                col[j][idx]=true;
                grid[gridnum][idx]=true;
            }
        }
        return true;
    }
};
