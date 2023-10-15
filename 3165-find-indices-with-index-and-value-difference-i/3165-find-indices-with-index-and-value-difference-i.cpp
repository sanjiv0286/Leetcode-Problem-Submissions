class Solution {
public:
  vector<int> findIndices(vector<int>& nums, int id, int vd) {
    int n = nums.size();
      if (id == 0 && vd == 0) {
        return {0, 0};
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && abs(i - j) >= id && abs(nums[i] - nums[j]) >= vd) {
                return {i, j};
            }
        }
    }
    
    return {-1, -1};
}

};