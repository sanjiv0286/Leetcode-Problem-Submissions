class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        sort(p.begin(), p.end());
        string prefix="";
        vector<vector<string>> res;
        for (auto& x : s) {
            prefix += x;
            vector<string> sugg;
            for (auto& y : p) {
                if (y.substr(0, prefix.size()) == prefix) {
                    sugg.push_back(y);
                }
                if (sugg.size() == 3) {
                    break;
                }
            }
            res.push_back(sugg);
        }
        return res;
    }
};