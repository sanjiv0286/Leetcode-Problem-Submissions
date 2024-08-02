class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<pair<int, int>> st;
        vector<int> res(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top().first <= t[i]) {
                st.pop();
            }

            int nge = (st.empty()) ? 0 : st.top().second - i;
            res[i] = nge;
            st.push({t[i], i});
        }
        return res;
    }
};
