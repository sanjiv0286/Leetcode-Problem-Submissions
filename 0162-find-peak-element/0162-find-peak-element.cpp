#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;

        while (l < h) {
            int mid = (l + h) / 2;
            if (nums[mid] >= nums[mid + 1]) {
                // if mid is greater than the next element, then the peak is in
                // the left half (including mid)
                h = mid;
            } else {
                // if mid is less than or equal to the next element, then the
                // peak is in the right half (excluding mid)
                l = mid + 1;
            }
        }

        // l and h will converge to the peak element
        return l;
    }
};
