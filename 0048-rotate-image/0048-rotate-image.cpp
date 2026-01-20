class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> rotated(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rotated[j][n - 1 - i] = matrix[i][j];
            }
        }
        matrix = rotated;
    }
};

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         reverse(matrix.begin(), matrix.end());
//         int n = matrix.size();
//         int m = matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=i;j<m;j++){
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }
//     }
// };
