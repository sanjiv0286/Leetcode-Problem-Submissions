#include <vector>
#include <algorithm>

class Solution {
public:
    int countDays(int d, std::vector<std::vector<int>>& m) {
        if (m.empty()) {
            return d;
        }

        // Sort intervals by start time
        std::sort(m.begin(), m.end());

        // Merge overlapping intervals
        std::vector<std::vector<int>> merged;
        merged.push_back(m[0]);
        for (const auto& interval : m) {
            if (interval[0] <= merged.back()[1]) {
                merged.back()[1] = std::max(merged.back()[1], interval[1]);
            } else {
                merged.push_back(interval);
            }
        }

        // Count the number of unoccupied days
        int unoccupied_days = 0;
        int previous_end = 0;

        for (const auto& interval : merged) {
            if (interval[0] > previous_end + 1) {
                unoccupied_days += interval[0] - previous_end - 1;
            }
            previous_end = interval[1];
        }

        // Consider days after the last interval
        if (previous_end < d) {
            unoccupied_days += d - previous_end;
        }

        return unoccupied_days;
    }
};
