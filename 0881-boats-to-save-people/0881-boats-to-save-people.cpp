class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        // int n = p.size();
        sort(p.begin(), p.end());
        int i = 0, j = p.size() - 1;
        int ans = 0;
        while (i <= j) {
            ans++;
            if (p[i] + p[j] <= l) {
                i++;
            }
            j--;
        }
        return ans;
    }
};