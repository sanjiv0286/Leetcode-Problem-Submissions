class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();
        int total=0;
        for (auto& x : s) {
            total += x - 'a' + 1;
        }
        int left=0;
        for (int i = 0; i < n; i++) {
            left += s[i] - 'a' + 1;
            if (left == (total - left)) {
                return true;
            }
        }
        return false;
    }
};
