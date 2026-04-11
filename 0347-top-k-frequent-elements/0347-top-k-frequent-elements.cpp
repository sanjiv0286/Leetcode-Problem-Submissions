class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto& x : nums) {
            mp[x]++;
        }
        vector<pair<int,int>>pa(mp.begin(),mp.end());
        auto lamda = [](pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;
        };
        sort(pa.begin(), pa.end(), lamda);
        vector<int>res;
        for(auto &x:pa){
            if(k>0)
            res.push_back(x.first);
            k--;
        }

        return res;
    }
};