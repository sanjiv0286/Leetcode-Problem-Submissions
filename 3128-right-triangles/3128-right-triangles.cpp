

class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        long long ct = 0;
 //  rowCount = {} // hash map to store count of 1s in each row
   // colCount = {} // hash map to store count of 1s in each column

        unordered_map<int, int> rowCount, colCount;

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j <c ; ++j) {
                if (grid[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if (grid[i][j] == 1) {
                    ct += (rowCount[i] - 1) * (colCount[j] - 1);
                }
            }
        }

        return ct;
    }
};
