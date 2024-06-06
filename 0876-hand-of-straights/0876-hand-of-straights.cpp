class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {

        int n = hand.size();

        if (n % g != 0) {
            return false;
        }
        map<int, int> m;
        for (auto& x : hand) {
            m[x]++;
        }

        while (m.empty() != true) {
            int ele = m.begin()->first;
            for (int i = 0; i < g; i++) {
                if (m[ele + i] == 0) {
                    return false;
                }
                m[ele + i]--;
                if (m[ele + i] < 1) {
                    m.erase(ele + i);
                }
            }
        }
        return true;
    }
};