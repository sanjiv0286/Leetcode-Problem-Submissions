

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> numCount;
        int operations = 0;

        for (int num : nums) {
            int complement = k - num;
            if (numCount[complement] > 0) {
                operations++;
                numCount[complement]--;
            } else {
                numCount[num]++;
            }
        }

        return operations;
    }
};
