class Solution {
public:
    int numOfUnplacedFruits(vector<int>& v1, vector<int>& v2) {
        int ct = 0, ans = 0;

        for (auto& x : v1) {
            int ele = x;
            for (int i = 0; i < v2.size(); i++) {
                if (v2[i] >= x) {
                    ct++;
                    v2.erase(v2.begin() + i);
                    break;
                }
            }
        }
        return v1.size()-ct;
    }
};