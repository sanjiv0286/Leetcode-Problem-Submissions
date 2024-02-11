
#include <vector>
using namespace std;

class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size(), m = pattern.size();
        int cnt = 0;
        for (int i = 0; i <= n - m-1; ++i) {
            bool yes = true;
            for (int j = 0; j < m; ++j) {
                if ((pattern[j] == 1 && nums[i + j + 1] <= nums[i + j]) ||
                    (pattern[j] == 0 && nums[i + j + 1] != nums[i + j]) ||
                    (pattern[j] == -1 && nums[i + j + 1] >= nums[i + j])) {
                    yes = false;
                    break;
                }
            }
            if (yes) cnt++;
        }
        return cnt;
    }
};

