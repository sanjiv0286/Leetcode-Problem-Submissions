class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int i = 0, curr_cost = 0, maxi = 0;
        for (int end = 0; end < n; end++) {
            curr_cost += abs(s[end] - t[end]);
            while (curr_cost > maxCost) {
                curr_cost -= abs(s[i] - t[i]);
                i++;
            }
            maxi = max(maxi, end - i + 1);
        }
        return maxi ;
    }
};