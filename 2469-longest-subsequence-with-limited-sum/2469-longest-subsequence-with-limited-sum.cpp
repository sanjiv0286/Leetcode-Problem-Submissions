class Solution {
public:
    vector<int> answerQueries(vector<int>& v, vector<int>& q) {
        sort(v.begin(), v.end());
        int n = v.size();

        vector<int> prefix(n);
        prefix[0] = v[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + v[i];
        }

        vector<int> ans;
        for (int i = 0; i < q.size(); i++) {
            int sum = q[i];
            int l = 0, r = n - 1, res = -1;
            while (l <= r) {
                // int mid = l + (r-1) / 2;
                int mid = l + (r - l) / 2;

                if (prefix[mid] <= sum) {
                    res = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            ans.push_back(res + 1);
        }
        return ans;
    }
};