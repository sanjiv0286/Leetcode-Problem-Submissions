class Solution {
public:
    int getLeastFrequentDigit(int n) {

        map<int, int> mp;
        while (n > 0) {
            int d = n % 10;
            mp[d]++;
            n /= 10;
        }
        int mini = INT_MAX;
        int ele;
        for (auto& x : mp) {
            if (x.second < mini){
                mini = min(x.second, mini);
                ele = x.first;
            }
        }

        return ele;
    }
};