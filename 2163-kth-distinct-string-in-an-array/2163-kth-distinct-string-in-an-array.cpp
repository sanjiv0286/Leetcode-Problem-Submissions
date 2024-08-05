class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> mp;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        int ct = 0;
        for (auto& x : arr) {
            if (mp[x] == 1) {
                ct++;
            }
            if (ct == k) {
                return x;
            }
        }
        return "";
    }
};