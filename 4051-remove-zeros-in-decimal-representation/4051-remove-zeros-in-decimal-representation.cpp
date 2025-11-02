class Solution {
public:
    long long removeZeros(long long n) {
        string ne = "";
        string res = to_string(n);
        long long sz = res.size();
        for (int i = 0; i < sz; i++) {
            if (res[i] != '0') {
                ne += res[i];
            }
        }
        long long val = stoll(ne);
        return val;
    }
};