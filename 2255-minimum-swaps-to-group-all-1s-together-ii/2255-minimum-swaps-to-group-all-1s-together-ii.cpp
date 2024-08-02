class Solution {
public:
    int minSwaps(vector<int>& v) {
        int n = v.size();
        int ct = count(v.begin(), v.end(), 1);
        vector<int> temp(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            temp[i] = v[i % n];
        }
        int cntone = 0;
        int maxi = 0;
        int i = 0;
        int j = 0;
        while (j < 2 * n) {
            if (temp[j] == 1) {
                cntone++;
            }
            if (j - i + 1 > ct) {
                cntone -= temp[i];
                i++;
            }
            maxi = max(maxi, cntone);
            j++;
        }
        return ct - maxi;
    }
};