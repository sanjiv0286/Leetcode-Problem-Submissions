class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& st) {
        sort(se.begin(), se.end());
        sort(st.begin(), st.end());
        int n = se.size();
        int ans=0;
        for (int i = 0; i < n; i++) {
            int diff = abs(se[i] - st[i]);
            ans += diff;
        }
        return ans;
    }
};