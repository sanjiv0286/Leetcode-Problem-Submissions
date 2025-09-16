class Solution {
public:
    void dfs(int oc, int nc, int n, int m, vector<vector<int>>& image,
             vector<vector<int>>& ans, int sr, int sc, int drow[], int dcol[]) {
        ans[sr][sc] = nc;
        for (int i = 0; i < 4; i++) {
            int nrow = sr + drow[i];
            int ncol = sc + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == oc && ans[nrow][ncol] != nc) {
                dfs(oc, nc, n, m, image, ans, nrow, ncol, drow, dcol);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int oc = image[sr][sc];
        int nc = color;
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans = image;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        dfs(oc, nc, n, m, image, ans, sr, sc, drow, dcol);
        return ans;
    }
};