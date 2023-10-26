class Solution {
public:
   void solve(vector<vector<char>>& board) {
    // if (board.empty() || board[0].empty()) {
    if (board.empty()) {

        return;
    }

    int rows = board.size();
    int cols = board[0].size();

    // Mark boundary 'O' cells
    for (int i = 0; i < rows; i++) {
        dfs(board, i, 0);
        dfs(board, i, cols - 1);
    }

    for (int j = 0; j < cols; j++) {
        dfs(board, 0, j);
        dfs(board, rows - 1, j);
    }

    // Capture surrounded regions
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == 'O') {
                board[i][j] = 'X';
            } 
            else if (board[i][j] == '#') {
                board[i][j] = 'O';
            }
        }
    }
}
private : 
void dfs(vector<vector<char>>& board, int i, int j) {
    int rows = board.size();
    int cols = board[0].size();

    if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != 'O') {
        return;
    }

    board[i][j] = '#';

    dfs(board, i - 1, j);
    dfs(board, i + 1, j);
    dfs(board, i, j - 1);
    dfs(board, i, j + 1);
}

};