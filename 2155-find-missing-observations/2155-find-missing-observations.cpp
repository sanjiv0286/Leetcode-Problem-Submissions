class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        vector<int> res;
        
        for (int i = 0; i < rolls.size(); i++) {
            sum += rolls[i];
        }
        
        int m = rolls.size();
        int val = mean * (n + m) - sum;
        
        if (val < n || val > 6 * n) {
            return {};
        }
        
        int base = val / n;
        int remainder = val % n;
        
        for (int i = 0; i < n; i++) {
            if (i < remainder) {
                res.push_back(base + 1);
            } else {
                res.push_back(base);
            }
        }
        
        return res;
    }
};
