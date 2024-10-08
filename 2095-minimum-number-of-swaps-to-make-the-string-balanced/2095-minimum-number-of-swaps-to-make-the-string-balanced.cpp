class Solution {
public:
    int notbalance(string s) {
        int imbalance = 0;
        int count = 0;

        for (char c : s) {
            if (c == '[') {
                count++;
            } else {
                count--;
            }

            if (count < 0) {
                imbalance++;
                count = 0;
            }
        }

        return imbalance;
    }

    int minSwaps(string s) { return (notbalance(s) + 1) / 2; }
};
