class Solution {
public:
    int chalkReplacer(std::vector<int>& chalk, long long k) {
        long long total_chalk = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= total_chalk;
        for (int i = 0; i < chalk.size(); ++i) {
            if (k < chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }
        return -1;
    }
};