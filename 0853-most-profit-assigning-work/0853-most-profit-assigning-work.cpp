class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        int n = w.size();
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({ p[i],d[i]});
        }
        sort(w.begin(), w.end(), greater<int>());
        int i = 0;
        int res = 0;
        while (i < n && !pq.empty()) {
            if (pq.top().second <= w[i]) {
                i++;
                res += pq.top().first;
            } else {
                pq.pop();
            }
        }
        return res;
    }
};