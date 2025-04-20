class Solution {
public:
    long long calculateScore(vector<string>& in, vector<int>& v) {
        int n = in.size();
        vector<bool> vis(n, false);
        long long score = 0;
        int i = 0;

        while (i >= 0 && i < n && !vis[i]) {
            vis[i] = true;
            if (in[i] == "add") {
                score += v[i];
                i += 1;
            } else if (in[i] == "jump") {
                i += v[i];
            }
        }

        return score;
    }
};
