class Solution {
public:
    int minimumIndex(vector<int>& c, int itemSize) {
        int n = c.size();
        int mini = INT_MAX;
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (c[i] >= itemSize) {
                if (c[i] < mini) {
                    mini = min(mini, c[i]);
                    idx = i;
                }
            }
        }
        return idx;
    }
};