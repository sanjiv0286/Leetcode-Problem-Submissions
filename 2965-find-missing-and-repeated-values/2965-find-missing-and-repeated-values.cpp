class Solution {
public:
//     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
//         int n = g.size();
//         int m= g[0].size();
//         int ct =0;
//         vector<int>res;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(g[i][j]>=1 || g[i][j]<=n*n){
//                     ct++;
//                 }
//                 if(ct==2){
//                     res.push_back(g[i][j]);
//                 }
//             }
//         }


//     }





vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    set<int> seen;

    // Find the repeating number
    int repeating = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num = grid[i][j];
            if (seen.count(num)) {
                repeating = num;
            }
            seen.insert(num);
        }
    }

    // Find the missing number
    int missing = -1;
    for (int num = 1; num <= n * n; ++num) {
        if (seen.count(num) == 0) {
            missing = num;
            break;
        }
    }

    return {repeating, missing};
}

};


