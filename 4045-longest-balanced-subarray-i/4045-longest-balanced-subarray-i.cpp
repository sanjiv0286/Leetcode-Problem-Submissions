class Solution {
public:
    int longestBalanced(vector<int>& A) {
        int n = A.size();
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> evenSet, oddSet;
            // int evenCount = 0, oddCount = 0;
            for (int j = i; j < n; j++) {
                int num = A[j];
                if (num % 2 == 0) {
                    evenSet.insert(num);
                    // evenCount++;
                } else {
                    oddSet.insert(num);
                    // oddCount++;
                }
                if (evenSet.size() == oddSet.size() ) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};