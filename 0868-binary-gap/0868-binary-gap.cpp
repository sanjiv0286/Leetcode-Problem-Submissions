class Solution {
public:
    int binaryGap(int n) {

        int curr = 0;
        int prev = -1;
        int res = 0;

        if ( (n && (n - 1)) == 0 || n==1) {
            return 0;
        }

        // while(n){
        for ( curr = 0; curr < 32; curr++) {
            if (n & 1) {
                if (prev != -1) {
                    res = max(res, curr - prev);
                }
                prev = curr;
            }
            // curr++;
            n >>= 1;
        }
        return res;
    }
};