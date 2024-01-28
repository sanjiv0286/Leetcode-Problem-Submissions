class Solution {
public:
    // ************** O(n^2) ******************************
    // int maxSubarraySumCircular(vector<int>& arr) {

    //     int res = INT_MIN;
    //     int n = arr.size();
    //     for(int i=0;i<n;i++){
    //         int curr_sum = arr[i];
    //         int max_sum = arr[i];
    //         for(int j=1;j<n;j++){
    //             int ind = (i+j)%n;
    //             curr_sum = max(curr_sum+arr[ind],arr[ind]);
    //             max_sum = max(max_sum ,curr_sum);
    //         }
    //         res = max(res,max_sum);
    //     }
    //     return res;

    // }
    // ************** O(n) ******************************
    int max_normal(vector<int>& arr, int n) {
        int curr_sum = arr[0];
        int max_sum = arr[0];
        for (int j = 1; j < n; j++) {
            // int ind = (i+j)%n;
            curr_sum = max(curr_sum + arr[j], arr[j]);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }

    int maxSubarraySumCircular(vector<int>& arr) {
        int n = arr.size();
        int maxNormalSubarray = max_normal(arr, n);
        if (maxNormalSubarray < 0)
            return maxNormalSubarray;
        int arr_sum = 0;
        for (int i = 0; i < n; i++) {
            arr_sum += arr[i];
            arr[i] = -arr[i];
        }
        int maxCircularSubarray = arr_sum + max_normal(arr, n);
        return max(maxNormalSubarray, maxCircularSubarray);
    }
};