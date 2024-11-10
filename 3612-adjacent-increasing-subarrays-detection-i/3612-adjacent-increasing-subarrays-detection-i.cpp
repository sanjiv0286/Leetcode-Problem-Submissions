class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& arr, int k) {
        int n = arr.size();
        
        for (int i = 0; i <= n - 2 * k; i++) {
            bool firstIncreasing = true;
            bool secondIncreasing = true;
            
            for (int j = i; j < i + k - 1; j++) {
                if (arr[j] >= arr[j + 1]) {
                    firstIncreasing = false;
                    break;
                }
            }
            
            if (!firstIncreasing) continue;
            
            for (int j = i + k; j < i + 2 * k - 1; j++) {
                if (arr[j] >= arr[j + 1]) {
                    secondIncreasing = false;
                    break;
                }
            }
            
            if (secondIncreasing) return true;
        }
        return false;
    }
};
