class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length(), len2 = s2.length();
        if (len1 > len2)
            return false;

        vector<int> s1Count(26, 0), s2Count(26, 0);

        for (int i = 0; i < len1; ++i) {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }

        if (s1Count == s2Count)
            return true;

        for (int i = len1; i < len2; ++i) {
            s2Count[s2[i] - 'a']++;
            s2Count[s2[i - len1] - 'a']--;

            if (s1Count == s2Count)
                return true;
        }

        return false;
    }
};