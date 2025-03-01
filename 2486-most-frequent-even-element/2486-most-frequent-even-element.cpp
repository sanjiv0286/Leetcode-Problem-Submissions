class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;

        for (auto& x : nums) {
            if (x % 2 == 0)
                m[x]++;
        }
        if(m.empty()){
            return -1;
        }
        int maxi, ans = 0;
        for (auto& x : m) {
            if (x.second > maxi || (x.second == maxi && x.first<ans)) {
                maxi = x.second;
                // ans = max(ans, maxi);
                ans = x.first;
            }
        }
        // if (ans == 0)
        //     return -1;
        return ans;
    }
};