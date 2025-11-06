class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                sum1 += s[j] - 'a' + 1;
            }
            for (int k = i + 1; k < n; k++) {
                sum2 += s[k] - 'a' + 1;
            }
            if (sum2 == sum1) {
                return true;
            }
            sum1=0;
            sum2=0;
        }

        return false;
    }
};