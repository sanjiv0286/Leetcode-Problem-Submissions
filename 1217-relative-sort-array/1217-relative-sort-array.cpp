class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();

        unordered_map<int, int> mp;
        for (auto& x : arr1) {
            mp[x]++;
        }

        vector<int> res;
        vector<int> temp;

        for (int i = 0; i < m; i++) {

            while (mp[arr2[i]] > 0) {
                res.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }

        for (int i = 0; i < arr1.size(); i++) {
            if (mp[arr1[i]] > 0) {
                temp.push_back(arr1[i]);
                mp[arr1[i]]--;
            }
        }
        
        sort(temp.begin(), temp.end());

        for (int i = 0; i < temp.size(); i++) {
            res.push_back(temp[i]);
        }
        return res;
    }
};