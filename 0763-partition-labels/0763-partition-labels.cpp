class Solution {
public:
    vector<int> partitionLabels(string s) {
        // * store the last occurance of every character in the map
        unordered_map<char, int> m;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            m[s[i]] = i;
        }
        // *intialize variable
        int end = 0;
        int start = 0;
        vector<int> res;
        // * Iterate through the string to find partitions
        for (int i = 0; i < n; i++) {
            end = max(end, m[s[i]]);//* Update the end to the last occurrence of the character
            if (i == end) {//* If the current index is the end of the partition
                res.push_back(end - start + 1);
                start = i+1;
            }
        }
        return res;
    }
};