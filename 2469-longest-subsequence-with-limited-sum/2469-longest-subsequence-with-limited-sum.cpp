class Solution {
public:
    vector<int> answerQueries(vector<int>& v, vector<int>& q) {
        vector<int> ans;
        int n = v.size();
        sort(v.begin(), v.end()); 
        int m = q.size();
        int ct = 0, check = 0;
        for (int i = 0; i < m; i++) {
            int sum = q[i];
            check = 0, ct = 0;
            for (int j = 0; j < n; j++) {
                check += v[j];
                if (check <= sum) {
                    ct++;
                } else {
                    // check = 0;
                    // ct++;
                    break;
                }
            }
            ans.push_back(ct);
        }
        return ans;
    }
};
