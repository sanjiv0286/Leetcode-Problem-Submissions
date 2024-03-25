// *************** Tc : O(nlogn)  || AS : O(n) *************************************
class Solution {
public:
    static bool cmpfun(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (auto& x : nums) {
            m[x]++;
        }
        vector<int> res;
        vector<pair<int, int>> p(m.begin(), m.end());
        sort(p.begin(), p.end(), cmpfun);
        // unordered_map<int, int> sortMapByValues;
        // for (auto& x : p) {
        //     sortMapByValues.insert(x);
        // }
        // **********************************************
        // for(auto &x:sortMapByValues){
        //     if(k!=0){
        //         res.push_back(x.first);
        //         k--;
        //     }
        // }
        for (int i = 0; i < k && i < p.size(); ++i) {
            res.push_back(p[i].first);
        }

        return res;
    }
};
