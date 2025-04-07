class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int max_score = 0;

        for (int i = 1; i < n; i++) {
            int left_zeros = count(s.begin(), s.begin() + i, '0');
            int right_ones = count(s.begin() + i, s.end(), '1');
            max_score = max(max_score, left_zeros + right_ones);
        }

        return max_score;
    }
};
