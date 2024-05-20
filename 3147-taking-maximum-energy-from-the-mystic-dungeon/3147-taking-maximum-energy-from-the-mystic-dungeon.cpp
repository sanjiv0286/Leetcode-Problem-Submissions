
// class Solution {
// public:
//     int maximumEnergy(std::vector<int>& energy, int k) {
//         int n = energy.size();
//         int maxEnergy = INT_MIN;
        
//         for (int start = 0; start < n; ++start) {
//             int currentEnergy = 0;
//             for (int i = start; i < n; i += k) {
//                 currentEnergy += energy[i];
//             }
//             maxEnergy = max(maxEnergy, currentEnergy);
//         }
        
//         return maxEnergy;
//     }
// };
// ************************************prefix sum 

#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maximumEnergy(std::vector<int>& energy, int k) {
        int n = energy.size();
        std::vector<int> dp(n, INT_MIN);
        
        // Bottom-up computation: from the end to the beginning
        for (int i = n - 1; i >= 0; --i) {
            // Start with the energy at the current position
            dp[i] = energy[i];
            // If the next position i + k is within bounds, add its dp value
            if (i + k < n) {
                dp[i] += dp[i + k];
            }
        }
        
        // Find the maximum value in the dp array
        int maxEnergy = INT_MIN;
        for (int i = 0; i < n; ++i) {
            maxEnergy = std::max(maxEnergy, dp[i]);
        }
        
        return maxEnergy;
    }
};
