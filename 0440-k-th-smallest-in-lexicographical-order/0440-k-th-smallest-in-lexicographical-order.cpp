class Solution {
public:
    // Function to count how many numbers exist in the range [cur, n] with the
    // current prefix
    int countInRange(int n, long prefix) {
        long cur = prefix;
        long next = prefix + 1;
        int count = 0;
        while (cur <= n) {
            count += min((long)n + 1, next) -
                     cur; // Count the numbers between cur and next
            cur *= 10;
            next *= 10;
        }
        return count;
    }

    int findKthNumber(int n, int k) {
        int cur = 1; // Start from 1
        k--; // We want the k-th number, but start with 1, so decrement k

        while (k > 0) {
            int count =
                countInRange(n, cur); // Count numbers with the current prefix
            if (count <= k) {
                // If the k-th number is not in this subtree, skip it
                k -= count;
                cur++; // Move to the next prefix
            } else {
                // If the k-th number is in this subtree, drill down
                k--;       // Decrement k since we're moving to the next level
                cur *= 10; // Go to the next level by appending a zero
            }
        }

        return cur;
    }
};
