class Solution {
public:
    int findMaximizedCapital(int project, int paissa, vector<int>& profits,
                             vector<int>& buy) {
        int n = profits.size();
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            vp[i] = {buy[i], profits[i]};
        }
        sort(vp.begin(), vp.end());
        int i = 0;
        priority_queue<int> pq;
        while (project--) {
            while (i < n && vp[i].first<=paissa) {
                pq.push(vp[i].second);
                 i++;
            }
            if (pq.empty()) {
                break;
            }
           
            paissa += pq.top();
            pq.pop();
        }
        return paissa;
    }
};