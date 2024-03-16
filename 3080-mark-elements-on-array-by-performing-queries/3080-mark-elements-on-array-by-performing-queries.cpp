

class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& v, vector<vector<int>>& q) {
        int n = v.size();
        vector<long long> res;
        unordered_set<int> s;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        long long unmarkedSum = 0;

        for (int i = 0; i < n; ++i) {
            minHeap.push({v[i], i});
            unmarkedSum += v[i];
        }

        for (auto& x : q) {
            int index = x[0];
            int k = x[1];

            if (s.find(index) == s.end()) {
                s.insert(index);
                unmarkedSum -= v[index]; 
            }

            while (k > 0 && !minHeap.empty()) {
                auto [value, idx] = minHeap.top();
                minHeap.pop();

                if (s.find(idx) == s.end()) {
                    s.insert(idx);
                    unmarkedSum -= value; 
                    --k;
                }
            }

            res.push_back(unmarkedSum);
        }

        return res;
    }
};
