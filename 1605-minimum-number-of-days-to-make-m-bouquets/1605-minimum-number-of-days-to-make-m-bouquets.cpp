// *********** Time Limit Exceed **************************
// ************* O(N^2) *********************************

// class Solution {
// public:
//     int possible(vector<int>& bloomDay, int mid, int m, int k) {
//         int no_of_bookey = 0;
//         int ct = 0;
//         int n = bloomDay.size();
//         for (int i = 0; i < n; i++) {
//             if (bloomDay[i] <= mid) {
//                 ct++;
//             } else {
//                 no_of_bookey += (ct / k);
//                 ct = 0;
//             }
          
//         }
//         no_of_bookey += (ct / k);
//         return (no_of_bookey >= m);
     
//     }

//     int minDays(vector<int>& bloomDay, int m, int k) {
//         int n = bloomDay.size();
//         int mini = *min_element(bloomDay.begin(), bloomDay.end());
//         int maxi = *max_element(bloomDay.begin(), bloomDay.end());

//         for (int i = mini; i <= maxi; i++) {
//             if (possible(bloomDay,i, m, k)){
//                 return i;
//             }
//         }
//         return -1;
       
//     }
// };

// **********************************************************************
// Approach - Using "Binary Search"
// T.C : O(n * log(maxi)) --> O(n*logn)
// value in the array bloomDay. S.C : O(1)


class Solution {
public:
    int possible(vector<int>& bloomDay, int mid, int m, int k) {
        int no_of_bookey = 0;
        int ct = 0;
        int n = bloomDay.size();
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                ct++;
            } else {
                no_of_bookey += (ct / k);
                ct = 0;
            }
            // if (ct == k) {
            //     no_of_bookey++;
            //     ct = 0;
            // }
        }
        no_of_bookey += (ct / k);
        return (no_of_bookey >= m);
        // return no_of_bookey;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = 0;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int minDays = -1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (possible(bloomDay, mid, m, k) == true) {
                minDays = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return minDays;
    }
};
