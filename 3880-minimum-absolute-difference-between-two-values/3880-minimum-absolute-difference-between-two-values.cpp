class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        vector<int> v1, v2;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                v1.push_back(i);
            }
            if (nums[i] == 2) {
                v2.push_back(i);
            }
        }
        if(v1.size()==0|| v2.size()==0){
            return -1;
        }
        int mini = INT_MAX;
        for (int i = 0; i < v1.size(); i++) {
            for (int j = 0; j < v2.size(); j++) {
                mini = min(mini, abs(v1[i] - v2[j]));
            }
        }
        return mini;
    }
};