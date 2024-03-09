class Solution {
public:
    int kthGrammar(int n, int k) {
        int length = pow(2, n - 1);
        int mid = length / 2;
        if (n == 1 && k == 1) {
            return 0;
        }
        if (k <= mid) {
            return kthGrammar(n - 1, k);
        } else {
            return !kthGrammar(n - 1, k - mid);
        }
    }
};