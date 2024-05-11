class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage,
                                int k) {
        int n = quality.size();

        vector<pair<int, int>> workers(n);
        for (int i = 0; i < n; i++)
            workers[i] = {quality[i], wage[i]};
        sort(workers.begin(), workers.end(),
             [](const pair<int, int>& l, const pair<int, int>& r) {
                 return ((double)l.second / l.first) <
                        ((double)r.second / r.first);
             });

        double res = 1e9;
        int sum = 0;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++) {
            pq.push(workers[i].first);
            sum += workers[i].first;

            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }

            if (pq.size() == k)
                res = min(res,
                          (double)sum / workers[i].first * workers[i].second);
        }

        return res;
    }
};