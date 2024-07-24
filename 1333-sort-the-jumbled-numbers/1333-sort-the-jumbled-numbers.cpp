class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = mapping.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[i] = mapping[i];
        }
        vector<pair<int, int>> res;
        int m = nums.size();
        for (int i = 0; i < m; i++) {
            string s = "";
            string temp = to_string(nums[i]);
            for (int j = 0; j < temp.size(); j++) {
                // s += to_string(mp[temp[j] - '0']);
                s+= to_string(mp[temp[j]-'0']);
            }
            int ele = stoi(s);
            res.push_back({ele, i});
        }
        vector<int> ans;
        sort(res.begin(), res.end());
        for (auto& x : res) {
            ans.push_back(nums[x.second]);
        }
        return ans;
    }
};
