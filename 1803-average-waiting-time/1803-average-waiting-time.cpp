class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        int n = c.size();
        vector<long long> prefix(n + 1, 0);
        prefix[0] = c[0][0] + c[0][1];
        for (int i = 1; i < n; i++) {
            if (c[i][0] < prefix[i - 1]) {
                prefix[i] = prefix[i - 1] + c[i][1];
            } else {
                prefix[i] =
                    prefix[i - 1] + abs(prefix[i - 1] - c[i][0]) + c[i][1];
            }
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (prefix[i] - c[i][0]);
        }
        return double(sum)/n;
    }
};
