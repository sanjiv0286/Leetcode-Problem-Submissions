class Solution {
public:
    int totalMoney(int n) {
        int t = 0;
        int srt = 1;

        while (n > 0) {

            for (int d = 0; d < min(n, 7); d++) {
                t += srt + d;
            }
            n -= 7;
            srt++;
        }
        return t;
    }
};