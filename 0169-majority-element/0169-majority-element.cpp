class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int ct = 1;
        int res = 0;
        for (int i = 1; i < n; i++) {
            if (arr[res] == arr[i]) {
                ct++;
            } else {
                ct--;
            }
            if (ct == 0) {
                res = i;
                ct = 1;
            }
        }
        return arr[res];
    }
};