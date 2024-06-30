class Solution {
private:
    bool isValid(vector<string>& board, int row, int col){
        //search for upwords straight
        for(int i=row; i>=0; i--){
            if(board[i][col]=='Q')
            return false;
        }

        //search for upword left diagonal
        for(int i= row, j= col; i>=0 && j>=0; i--, j--){
            if(board[i][j]=='Q')
            return false;
        }

        //search for upword right diagonal
        for(int i= row, j=col; i>=0 && j<board.size(); i--, j++){
            if(board[i][j]=='Q')
            return false;
        }

        return true;
    }

    void solve(vector<string>&board, int row){
        if(row == board.size()){
            res.push_back(board);
            return;
        }

        for(int i=0; i<board.size(); i++){
            if(isValid(board, row, i)){
                board[row][i] = 'Q';

                solve(board, row+1);

                board[row][i] = '.';
            }
        }
    }

public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        if(n==0)
        return {};

        vector<string> board(n, string(n, '.'));

        solve(board, 0);

        return res;
    }
};