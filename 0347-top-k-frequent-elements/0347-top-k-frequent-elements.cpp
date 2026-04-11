class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto& x : nums) {
            mp[x]++;
        }
        vector<pair<int, int>> pa;
        for (auto& x : mp) {
            pa.push_back({x.second, x.first});//**************
        }
        // sort(pa.begin(), pa.end(), greater<pair<int,int>>());//***********
        sort(pa.rbegin(),pa.rend());
        vector<int> res;
        for (auto& x : pa) {
            if (k > 0)
                res.push_back(x.second);
            k--;
        }
        return res;
    }
};