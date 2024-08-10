// simply map all character to matrix of 0 , 1 and then simple impliment number of island approach using dfs to solve the problem 

class Solution {
public:
    void dfs(vector<vector<int>>& matrix, int row, int col) {
        if (row < 0 || row >= matrix.size() || col < 0 || col >= matrix[0].size() ||
            matrix[row][col] == 1) {
            return;
        }

        matrix[row][col] = 1 ;// Mark the current cell as visited

        // Explore the neighboring cells
        dfs(matrix, row - 1, col); // Up
        dfs(matrix, row + 1, col); // Down
        dfs(matrix, row, col - 1); // Left
        dfs(matrix, row, col + 1); // Right
    }
    int regionsBySlashes(vector<string>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        int regions = 0;

        vector<vector<int>> matrix(rows * 3, vector<int>(cols * 3, 0)); // M * N

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '/') {
                    matrix[i * 3][j * 3 + 2] = 1;
                    matrix[i * 3 + 1][j * 3 + 1] = 1;
                    matrix[i * 3 + 2][j * 3] = 1;
                } else if (grid[i][j] == '\\') {
                    matrix[i * 3][j * 3] = 1;
                    matrix[i * 3 + 1][j * 3 + 1] = 1;
                    matrix[i * 3 + 2][j * 3 + 2] = 1;
                }
            }
        }

        if (matrix.empty()) {
            return 0;
        }

        int numIslands = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    numIslands++;
                    dfs(matrix, i, j);
                }
            }
        }

        return numIslands;
    }
};