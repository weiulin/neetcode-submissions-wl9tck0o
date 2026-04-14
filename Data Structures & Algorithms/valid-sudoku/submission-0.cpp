class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10]={0};
        int col[9][10]={0};
        int box[9][10]={0};
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.')
                    continue;

                int val = board[r][c]-'0';
                int box_idx = (r/3)*3+(c/3);

                if(row[r][val]==1||col[c][val]==1||box[box_idx][val]==1)
                    return false;

                row[r][val]=1;
                col[c][val]=1;
                box[box_idx][val]=1;
            }
        }
        return true;
    }
};
