class Solution {
public:
    bool checksubisland(vector<vector<int>>& grid1, vector<vector<int>>& grid2,
                        int i, int j) {
        if (i >= grid1.size() || i < 0 || j >= grid2[0].size() || j < 0 ||
            grid2[i][j] == 0) {
            return true;
        }

        if (grid1[i][j] != 1) {
            return false;
        }
        grid2[i][j] = 0;
        bool res = true;
        res &= checksubisland(grid1, grid2, i + 1, j);
        res &= checksubisland(grid1, grid2, i - 1, j);
        res &= checksubisland(grid1, grid2, i, j + 1);
        res &= checksubisland(grid1, grid2, i, j - 1);

        return res;
    }

    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {

        int m = grid1.size();
        int n = grid2[0].size();
        int ct = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 1) {
                    if (checksubisland(grid1, grid2, i, j)) {
                        ct++;
                    }
                }
            }
        }
        return ct;
    }
};