class Solution {
public:
    void dfs(int a, int b, int n, int m, vector<vector<int>>& ans, int drow[],
             int dcol[], int sr, int sc,vector<vector<int>>& image) {
        ans[sr][sc] = b;
        for (int i = 0; i < 4; i++) {
            int nrow = sr + drow[i];
            int ncol = sc + dcol[i];
            if (nrow >= 0 && nrow < n &&  ncol >= 0 && ncol < m &&
                image[nrow][ncol] == a && ans[nrow][ncol] != b) {
                dfs(a, b, n, m, ans, drow, dcol, nrow, ncol,image);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int intial_color = image[sr][sc];
        int new_color = color;
        int n = image.size();
        int m = image[0].size();
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, +1, 0, -1};
        vector<vector<int>> ans = image;
        dfs(intial_color, new_color, n, m, ans, drow, dcol, sr, sc,image);
        return ans;
    }
};