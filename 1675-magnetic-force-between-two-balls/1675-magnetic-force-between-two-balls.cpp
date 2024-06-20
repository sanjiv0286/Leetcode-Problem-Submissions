#include <algorithm>
#include <vector>

class Solution {
public:
    bool isFeasible(const std::vector<int>& p, int n, int m, int dis) {
        int coor = p[0];
        int ct = 1;
        for (int i = 1; i < n; i++) { // Start from index 1
            if (p[i] - coor >= dis) {
                ct++;
                coor = p[i];
            }
            if (ct == m) {
                return true;
            }
        }
        return false;
    }

    int maxDistance(std::vector<int>& p, int m) {
        std::sort(p.begin(), p.end());
        int n = p.size();
        int l = 1;
        int h = p[n - 1] - p[0];
        int res = 0;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (isFeasible(p, n, m, mid)) {
                res = mid;
                l = mid + 1; // Search in the upper half
            } else {
                h = mid - 1; // Search in the lower half
            }
        }
        return res;
    }
};
