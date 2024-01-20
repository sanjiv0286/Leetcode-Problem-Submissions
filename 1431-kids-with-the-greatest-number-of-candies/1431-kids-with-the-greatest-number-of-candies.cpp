class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        int n = c.size();
        int maxi = *max_element(c.begin(), c.end());
        vector<bool> tfarr;
        for (int i = 0; i < n; i++) {
            if (c[i] + ec >= maxi) {
                tfarr.push_back(true);
            } else {
                tfarr.push_back(false);
            }
        }
        return tfarr;
    }
};