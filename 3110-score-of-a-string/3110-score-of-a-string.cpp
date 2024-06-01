class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 1; i < n; i++) {
            int a = (int)(s[i]);
            int b = (int)(s[i-1]);
            ans += abs(a - b);
        }
        return ans;
    }
};