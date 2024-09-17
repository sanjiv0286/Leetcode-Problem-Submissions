class Solution {
public:
    int findMinDifference(vector<string>& t) {
        int mini = INT_MAX;
        vector<int> time_min;
        for (auto& x : t) {
            int hr = 10 * (x[0] - '0') + (x[1] - '0');
            int min = 10 * (x[3] - '0') + (x[4] - '0');
            time_min.push_back(hr * 60 + min);
        }
        int n = time_min.size();
        
        sort(time_min.begin(), time_min.end());

        // Calculate the minimum difference between adjacent times
        for (int i = 1; i < n; i++) {
            mini = min(mini, time_min[i] - time_min[i - 1]);
        }

        // Also, check the difference between the first and last time,
        // considering the 24-hour wraparound
        mini = min(mini, 1440 - (time_min[n - 1] - time_min[0]));

        return mini;
    }
};
