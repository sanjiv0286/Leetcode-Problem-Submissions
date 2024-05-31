// tc : O(n)  - >  optimized solution

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
                if (n == 0) return {}; // Handle the edge case of an empty array

        vector<int> res;
        long long int zor=0;
        //* calculate zor all the elements
        for (int i = 0; i < n; i++) {
            zor = zor ^ nums[i];
        }
        int res1=0,res2=0;
        // then i calculate the right most bit using xor property 
        int num = (zor & ~(zor-1));
        for (int i=0;i<n;i++){
            if((nums[i]&num)!=0){
                res1 = res1 ^ nums[i];
            }
            else {
                res2 = res2 ^ nums[i];
            }
        }
        res.push_back(res1);
        res.push_back(res2);
        return res;
    }
};

