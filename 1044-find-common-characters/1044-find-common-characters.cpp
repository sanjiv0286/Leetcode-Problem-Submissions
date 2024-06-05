class Solution {
public:
    vector<string> commonChars(vector<string>& a) {
        vector<string> v;
        int n = a.size();
        for (auto& x : a[0]) {
            int common = 1;
            for (int i = 1; i < n; i++) {
                if (a[i].find(x) == string::npos) {
                    common = 0;
                    break;
                } else {
                    a[i].erase(a[i].find(x), 1);
                }
            }
            if (common == 1) {
                v.push_back(string(1, x));
            }
        }
        return v;
    }
};