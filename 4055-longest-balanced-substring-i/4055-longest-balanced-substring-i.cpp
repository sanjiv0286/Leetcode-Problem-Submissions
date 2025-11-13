class Solution {
public:
    // int longestBalanced(string s) {
    //     int n = s.size();

    // }

    int longestBalanced(const string& s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            int freq[26] = {0};

            for (int j = i; j < n; ++j) {
                int c = s[j] - 'a';
                freq[c]++;

                // check whether all non-zero frequencies are equal
                int mn = INT_MAX, mx = 0;
                for (int k = 0; k < 26; ++k) {
                    if (freq[k] > 0) {
                        mn = min(mn, freq[k]);
                        mx = max(mx, freq[k]);
                    }
                }

                if (mn != INT_MAX && mn == mx) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};