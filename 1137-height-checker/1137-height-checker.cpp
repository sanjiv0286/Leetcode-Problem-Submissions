class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // Step 1: Count the frequency of each height
        vector<int> heightCount(101, 0); // Assuming heights are between 1 and 100
        for (int h : heights) {
            heightCount[h]++;
        }

        // Step 2: Reconstruct the sorted list based on the frequency counts
        vector<int> expected;
        for (int height = 1; height <= 100; height++) {
            while (heightCount[height] > 0) {
                expected.push_back(height);
                heightCount[height]--;
            }
        }

        // Step 3: Count the differences between the original list and the expected sorted list
        int count = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
};
