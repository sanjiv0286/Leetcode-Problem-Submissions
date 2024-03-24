class Solution {
public:
    bool check(string newS) {
        unordered_map<char, int> map;
        for (auto i : newS) {
            map[i]++;
            if (map[i] > 2) {
                return false;
            }
        }
        return true;
    }

    int maximumLengthSubstring(string s) {
        int n = s.size();
        int ans = 0;
        int newans = 0;
        map<char, int> m;
        if (check(s)) {
            return n;
        }
        for (int i = 0; i < n; i++) {
            string newS = "";
            for (int len = 1; len <= n - i; len++) {
                newS = s.substr(i, len);
                if (check(newS)) {
                    newans = newS.length();
                    ans = max(ans, newans);
                } else {
                    break;
                }
            }
        }
        return ans;
    }
};
