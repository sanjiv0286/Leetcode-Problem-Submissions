class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> v;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    // return true;
                    v.push_back(i);
                    v.push_back(j);
                    // break;
                    return v;
                }
            }
        }
        // return false;
        v.push_back(-1);
        return v;
    }
};