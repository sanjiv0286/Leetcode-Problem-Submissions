

class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> firstOccurrence;
        firstOccurrence[0] =
            -1;
        int maxLen = 0;
        int mask = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'a') {
                mask ^= (1 << 0);
            } else if (s[i] == 'e') {
                mask ^= (1 << 1); 
            } else if (s[i] == 'i') {
                mask ^= (1 << 2); 
            } else if (s[i] == 'o') {
                mask ^= (1 << 3); 
            } else if (s[i] == 'u') {
                mask ^= (1 << 4); 
            }

           
            if (firstOccurrence.find(mask) != firstOccurrence.end()) {
                maxLen = max(maxLen, i - firstOccurrence[mask]);
            } else {
                firstOccurrence[mask] =
                    i; 
            }
        }

        return maxLen;
    }
};