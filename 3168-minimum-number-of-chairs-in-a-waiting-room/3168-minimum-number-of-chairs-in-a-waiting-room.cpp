class Solution {
public:
    int minimumChairs(string s) {
        int ct = 0, ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'E') {
                ct++;
            } else {
                ct--;
            }
            ans = max(ans, ct);
        }
        return ans;
    }
};