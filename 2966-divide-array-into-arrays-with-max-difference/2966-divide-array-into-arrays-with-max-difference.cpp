class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        sort(v.begin(), v.end());
        vector<vector<int>> res;
        int n = v.size();
        for (int i = 0; i < n - 2; i+=3) {
            if (abs(v[i] - v[i + 2]) <= k) {
                res.push_back({v[i], v[i + 1], v[i + 2]});
            } else {
                return {};
            }
            // i += 2;
        }
        return res;
        //    else{
        //        return {};
        //    }
    }
};