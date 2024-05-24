class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string w, int k) {
        unordered_map<string, int> m;
        int n = w.size();
        int ans = 0;
        for (int i = 0; i < n; i += k) {
            string s = w.substr(i, k);
            m[s]++;
            ans = max(ans, m[s]);
        }
        return (n / k - ans);
    }
};