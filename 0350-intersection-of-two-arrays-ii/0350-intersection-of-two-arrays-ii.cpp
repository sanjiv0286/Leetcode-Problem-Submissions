class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        for (auto& x : nums1) {
            m[x]++;
        }
        vector<int> v;
        for (auto& x : nums2) {
            if (m[x] > 0) {
                v.push_back(x);
                m[x]--;
            }
        }
        return v;
    }
};