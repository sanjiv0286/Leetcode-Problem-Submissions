class Solution {
public:
    int distributeCandies(int n, int limit) {
        int ans = 0;
        for(int i =  0; i < min(n, limit) + 1; i++) {
            int lo = max(0, n - i - limit);
            int  hi = min(n - i, limit);
        if (hi >= lo)
                ans += hi - lo + 1;
        }
        return ans;
    }
};

