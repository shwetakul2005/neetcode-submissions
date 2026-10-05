class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;

        for(int i =0; i<9; i++){
            unordered_map <char,int> row_freq;
            unordered_map <char,int> col_freq;
            unordered_map <char,int> sq_freq;
            for(int j=0; j<9; j++){
                if(board[i][j] != '.') {
                    if(row_freq[board[i][j]] == 1) return 0;
                    row_freq[board[i][j]] = 1;
                }

                if(board[j][i] != '.') {
                    if(col_freq[board[j][i]] == 1) return 0;
                    col_freq[board[j][i]] = 1;
                }

                if(board[(i/3)*3 + (j/3)][(i%3)*3+j%3] != '.'){
                    if(sq_freq[board[(i/3)*3 + (j/3)][(i%3)*3+j%3] ] == 1) return 0;
                    sq_freq[board[(i/3)*3 + (j/3)][(i%3)*3+j%3] ] = 1;
                }
            }
        }
       
        return 1;
    }
};
