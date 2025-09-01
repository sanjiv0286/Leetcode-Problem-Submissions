#define p pair<double, int>
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& c, int e) {
        int n = c.size();
        int m = c[0].size();
        priority_queue<p> pq;
        for (int i = 0; i < n; i++) {
            double a = (double)c[i][0];
            double b = (double)c[i][1];
            double pr = a / b;
            double newpr = (a + 1) / (b + 1);
            double gain = newpr - pr;
            pq.push({gain, i});
        }
        while (e--) {
            auto curr = pq.top();
            pq.pop();
            double gain = curr.first;
            int idx = curr.second;
            c[idx][0]++;
            c[idx][1]++;
            double currpr = (double)c[idx][0] / c[idx][1];
            double newpr = (double)(c[idx][0] + 1) / (c[idx][1] + 1);
            gain = newpr - currpr;
            pq.push({gain, idx});
        }
        double result = 0.0;
        for (auto& x : c) {
            result += (double)(x[0]) / (x[1]);
        }
        return result / n;
    }
};