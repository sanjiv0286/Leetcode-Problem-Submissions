class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& d) {
        int n = d.size();
        vector<int> v(n, 0);
        sort(d.begin(), d.end());
        // v.push_back(n/2);
        int i = 0, j = 0;
        bool skip = false;
        while (i < n) {
            if (v[j] == 0) {
                if (skip == false) {
                    v[j]=d[i];
                    i++;
                }
              skip = !skip;
            }
            j = (j + 1) % n;
        }
        return v;
    }
};