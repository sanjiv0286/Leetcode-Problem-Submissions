class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> res;
        int n = str.size();
        map<string, vector<string>> m;
        for (int i = 0; i < n; i++) {
            string s = str[i];
            sort(s.begin(), s.end());
            m[s].push_back(str[i]); // Corrected line
        }

        for (auto& x : m) {
            // if(m.find(x)!=m.end()){
            res.push_back(x.second);
        }

        return res;
    }
};