class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        deque<int> dq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            dq.push_back(nums[i]);
        }
        int i = 0;
        int op = n / 2;
        double ans = INT_MAX;
        while (i < op) {
            i++;
            int ele1 = dq.front();
            int ele2 = dq.back();
            dq.pop_front();
            dq.pop_back();
            double avg = (ele1 + ele2) / 2.0;
            ans = min(ans, avg);
        }
        return ans;
    }
};