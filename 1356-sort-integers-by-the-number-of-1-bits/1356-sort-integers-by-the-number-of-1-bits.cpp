class Solution {
public:
    static int find1bits(int a) {
        int bits = __builtin_popcount(a);
        return bits;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        auto lamda = [](int a, int b) {
            int ct1a = find1bits(a);
            int ct1b = find1bits(b);
            if (ct1a == ct1b) {
                return a < b; // sort in ascending
            }
            return ct1a < ct1b; // sort in ascending based on count of 1 bit
        };
        sort(arr.begin(), arr.end(), lamda);
        return arr;
    }
};