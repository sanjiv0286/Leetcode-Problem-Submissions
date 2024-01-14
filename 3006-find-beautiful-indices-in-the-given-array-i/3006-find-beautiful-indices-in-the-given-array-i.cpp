class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {

        vector<int> ans, inda, indb;
        int l1 = s.size();
        int l2 = a.size();
        int l3 = b.size();
        for (int i = 0; i <= l1 - l2; i++) {
            if (s.substr(i, l2) == a) {
                inda.push_back(i);
            }
        }
        for (int j = 0; j <= l1 - l3; j++) {
            if (s.substr(j, l3) == b) {
                indb.push_back(j);
            }
        }
        for (int i = 0; i < inda.size(); i++) {
            for (int j = 0; j < indb.size(); j++) {
                if (abs(inda[i] - indb[j]) <= k) {
                    ans.push_back(inda[i]);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
// =========================================
