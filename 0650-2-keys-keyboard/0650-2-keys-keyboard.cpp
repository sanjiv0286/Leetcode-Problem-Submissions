class Solution {
public:
    int solve(int n, int curra, int copied) {
        if (curra == n) {
            return 0;
        }
        if (curra > n) {
            return 1e9;
        }

        int copyPaste = 2 + solve(n, curra + curra, curra);

        int paste = 1 + solve(n, curra + copied, copied);

        return min(copyPaste, paste);
    }

    int minSteps(int n) {
        if (n == 1) {
            return 0;
        }
        return 1 + solve(n, 1, 1);
    }
};

