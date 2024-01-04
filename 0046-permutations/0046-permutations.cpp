#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> result;
    int n;

    void solve(std::vector<int>& output, std::vector<int>& input) {
        if (output.size() == n) {
            result.push_back(output);
            return;
        }
        for (int i = 0; i < input.size(); i++) {
            output.push_back(input[i]);
            std::vector<int> tempinput(input);
            tempinput.erase(tempinput.begin() + i);
            solve(output, tempinput);
            output.pop_back();
        }
    }

    vector<std::vector<int>> permute(std::vector<int>& nums) {
        n = nums.size();
        std::vector<int> output;
        std::vector<int> input(nums);
        solve(output, input);
        return result;
    }
};
