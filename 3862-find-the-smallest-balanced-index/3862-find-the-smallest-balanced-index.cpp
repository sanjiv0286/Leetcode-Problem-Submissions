class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        long double prefixsum[100001];
        prefixsum[0]= nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            prefixsum[i] = prefixsum[i-1]+nums[i];
        }
        long double prod =1;
        int ans = -1;
        for(int i=n-1;i>=1;i--){
            if(prod == prefixsum[i-1]){
                ans =i;
            }
            if(prod>prefixsum[i-1]){
                break;
            }
            prod *= nums[i];
        }
        return ans;
        
    }
};