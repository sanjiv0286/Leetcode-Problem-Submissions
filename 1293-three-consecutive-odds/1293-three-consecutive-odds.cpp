class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int ct = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                ct++;
            } else {
                ct = 0;
            }

            if (ct == 3) {
                return true;
            }
        }
        return false;
    }
};