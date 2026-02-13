class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {

        priority_queue<pair<int, pair<int, int>>> pq;
        for (int i = 0; i < p.size(); i++) {
            int dist = (p[i][0] * p[i][0] + p[i][1] * p[i][1]);
            pq.push({dist, {p[i][0], p[i][1]}});
            if(pq.size()>k)
            {
                pq.pop();
            }

        }

        vector<vector<int>>res;

        while(!pq.empty()){
            res.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }

        return res;
    }
};