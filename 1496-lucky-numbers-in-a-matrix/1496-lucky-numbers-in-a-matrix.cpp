

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {
        vector<int> res;

        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {
            int mini = INT_MAX;
            int miniColIndex = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] < mini) {
                    mini = mat[i][j];
                    miniColIndex = j;
                }
            }

            bool is_max_col = true;
            for (int k = 0; k < n; k++) {
                if (mat[k][miniColIndex] > mini) {
                    is_max_col = false;
                    break;
                }
            }

            if (is_max_col) {
                res.push_back(mini);
            }
        }

        return res;
    }
};
