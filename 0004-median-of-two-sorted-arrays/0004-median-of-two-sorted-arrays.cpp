class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {

        int m = A.size();
        int n = B.size();
        if (m>n) {
            return findMedianSortedArrays(B, A);
        }
        int start = 0;
        int end = m;
        while (start <= end) {
            int i1 = (start + end) / 2;
            int i2 = ((n + m + 1) / 2) - i1;
             long long max1 = (i1 == 0) ? INT_MIN : A[i1 - 1];
            long long max2 = (i2 == 0) ? INT_MIN : B[i2 - 1];
            long long min1 = (i1 == m) ? INT_MAX : A[i1];
            long long min2 = (i2 == n) ? INT_MAX : B[i2];
            if (max1 <= min2 && max2 <= min1) {
                if ((n + m) % 2 == 0) {
                    return (double)(max(max1, max2) + min(min1, min2)) / 2;
                } else {
                    return (double)(max(max1, max2));
                }
            } else if (max1 > min2) {
                end = i1 - 1;
            } else {
                start = i1 + 1;
            }
        }
        return 0.0;
    }
};