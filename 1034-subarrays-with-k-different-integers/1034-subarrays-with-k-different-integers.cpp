class Solution {
public:
    int atMostK(vector<int>& arr, int k) {
        int n = arr.size();
        int res = 0;

        // pointers to mark the left and right boundary
        int left = 0, right = 0;

        // Frequency map
        unordered_map<int, int> freq;
        while (right < n) {
            freq[arr[right]] += 1;

            // If this is a new element in the window,
            // decrement k by 1
            if (freq[arr[right]] == 1)
                k -= 1;

            // Shrink the window until distinct element
            // count becomes <= k
            while (k < 0) {
                freq[arr[left]] -= 1;
                if (freq[arr[left]] == 0)
                    k += 1;
                left += 1;
            }

            // add all possible subarrays to result
            res += (right - left + 1);
            right += 1;
        }
        return res;
    }

    int exactlyK(vector<int>& arr, int k) {
        return atMostK(arr, k) - atMostK(arr, k - 1);
    }

    int subarraysWithKDistinct(vector<int>& arr, int k) {
        int ans = exactlyK(arr, k);
        return ans;
    }
};