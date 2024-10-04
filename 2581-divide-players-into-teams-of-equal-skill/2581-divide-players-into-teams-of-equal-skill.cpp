class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        sort(s.begin(), s.end());
        int i = 0;
        int n = s.size();
        int j = n - 1;
        int sum = s[i] + s[j];
        long long chem = 0;
        while (i <= j) {
            long long currskill = s[i] + s[j];
            if (currskill != sum) {
                return -1;
            }
            chem += (long long )(s[i] * s[j]) ;
            i++;
            j--;
        }

        // for()
        return chem;
    }
};