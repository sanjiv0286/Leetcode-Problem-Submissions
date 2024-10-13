class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& a) {
        vector<int> res(a.size(), -1);
        for (int i = 0; i < a.size(); ++i) {
            for (int x = 0; x <= a[i]; ++x) {
                if ((x | (x + 1)) == a[i]) {
                    res[i] = x; 
                    // res.push_back()
                    break;
                }
            }
        }
        return res;
    }
};
