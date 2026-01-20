class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        map<int, vector<int>> mp;
        int m = mat.size();
        int n = mat[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                mp[i - j].push_back(mat[i][j]);
        }

        for (auto& x : mp) {
            sort(x.second.begin(), x.second.end(), greater<int>());
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = mp[i - j].back();
                mp[i - j].pop_back();
            }
        }

        return mat;
    }
};