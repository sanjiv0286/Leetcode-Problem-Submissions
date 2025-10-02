class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }

private:
    int atMostK(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int l = 0, res = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (count[nums[r]] == 0) {
                k--; // new distinct element
            }
            count[nums[r]]++;

            while (k < 0) {
                count[nums[l]]--;
                if (count[nums[l]] == 0) {
                    k++; // one distinct removed
                }
                l++;
            }

            res += (r - l + 1);
        }
        return res;
    }
};
