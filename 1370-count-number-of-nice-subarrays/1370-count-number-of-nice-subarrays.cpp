class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int, int> m;
        m[0] = 1;
        int res = 0;
        int oddct=0;
        for (int i = 0; i < n; i++) {
            if((nums[i]%2)!=0){
                oddct++;
            }
            int rem = oddct - k;
            if (m.find(rem) != m.end()) {
                res += m[rem];
            }
            m[oddct]++;
        }
        return res;
    }
};