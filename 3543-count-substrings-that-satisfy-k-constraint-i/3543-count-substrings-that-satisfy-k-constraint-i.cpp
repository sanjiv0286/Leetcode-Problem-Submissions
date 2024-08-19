class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        // O(n*2)
        int res = 0;
        int ct0 = 0, ct1 = 0;
        while (j < n) {
            if (s[j] == '0') {
                ct0++;
            } else {
                ct1++;
            }
            while (ct0 > k && ct1 > k) {
                if (s[i] == '0') {
                    ct0--;
                } else {
                    ct1--;
                }
                i++;
            }
            res += (j - i + 1);
            j++;
        }

        return res;
    }
};