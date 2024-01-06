
// class Solution dax
// {
// public:
//     int missingInteger(vector<int> &nums)
//     {
//         int n = nums.size();
//         int sum = 0;
//         int uv = 0;
//         for (int i = 1; i < n; i++)
//         {
//             if (nums[i] == nums[i - 1] + 1)
//             {
//                 sum = sum + nums[i - 1];
//                 uv = nums[i];
//             }
//         }
//         sum = sum + uv;
//         sort(nums.begin(),nums.end());
//         for (int i = 0; i < n; i++)
//         {
//             if (nums[i] == sum)
//             {
//                 sum++;
//             }
//         }
//         return sum;
//     }
// };


class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
        // if (nums.size() == 1) return nums[0] + 1;

        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (find(nums.begin(), nums.end(), sum) == nums.end()) {
                return sum;
            } else {
                sum++;
            }
        }

        return nums[nums.size() - 1] + 1;
    }
};

