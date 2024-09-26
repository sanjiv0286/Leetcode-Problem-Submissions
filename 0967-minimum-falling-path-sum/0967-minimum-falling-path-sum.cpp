class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n = matrix.size();

        for (int row = n - 2; row >= 0; --row) {
            for (int col = 0; col < n; ++col) {
                int bestBelow = matrix[row + 1][col];
                if (col > 0) {
                    bestBelow = min(bestBelow, matrix[row + 1][col - 1]);
                }
                if (col < n - 1) {
                    bestBelow = min(bestBelow, matrix[row + 1][col + 1]);
                }
                matrix[row][col] += bestBelow;
            }
        }

        return *min_element(matrix[0].begin(), matrix[0].end());
    }
};