class Solution {
public:
    // bool searchMatrix(vector<vector<int>>& v, int t) {

    // }

    int searchMatrix(vector<vector<int>>& v, int t) {

        int n = v.size();
        int m = v[0].size();


        int l = 0;
        int r = n*m - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (v[mid/m][mid%m] == t) {
                return 1;
            } else if (v[mid/m][mid%m] < t) {
                l = mid + 1;

            } else {
                r = mid - 1;
            }
        }
        return 0;
    }
};