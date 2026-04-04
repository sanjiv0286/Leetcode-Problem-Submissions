class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t) {
            return true;
        } else if (s.size() != t.size()) {
            return false;
        }

        vector<int> freq(26, 0);

        for (auto& c : s) {
            freq[c - 'a']++;
        }

        for (auto& c : t) {
            freq[c - 'a']--;
        }

        for (auto& count : freq) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};