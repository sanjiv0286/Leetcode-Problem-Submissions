class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int count = 0;
        
        for (int j = 0; j < n; ++j) {
            int smallerBefore = 0, largerBefore = 0;
            int smallerAfter = 0, largerAfter = 0;
            
            // Count smaller and larger elements before index j
            for (int i = 0; i < j; ++i) {
                if (rating[i] < rating[j]) {
                    smallerBefore++;
                } else {
                    largerBefore++;
                }
            }
            
            // Count smaller and larger elements after index j
            for (int k = j + 1; k < n; ++k) {
                if (rating[k] < rating[j]) {
                    smallerAfter++;
                } else {
                    largerAfter++;
                }
            }
            
            // Calculate the number of valid teams with rating[j] as the middle element
            count += smallerBefore * largerAfter; // Increasing sequence
            count += largerBefore * smallerAfter; // Decreasing sequence
        }
        
        return count;
    }
};
