class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int>v1,v2,v;
        int n = nums.size();
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
          if (n < 2) 
            return nums;
        for(int i=2;i<n;i++){
            // if(v1[i]>v2[i]){
            //     v1.push_back(nums[i+1]);
            // }
            // else {
            //     v2.push_back(nums[i+1]); 
            // }
             if (v1.back() > v2.back()) {
                v1.push_back(nums[i]);
            } else {
                v2.push_back(nums[i]);
            }
        }
        for(auto &x:v1){
            v.push_back(x);
        }
         for(auto &x:v2){
            v.push_back(x);
        }
        return v;
        
    }
};