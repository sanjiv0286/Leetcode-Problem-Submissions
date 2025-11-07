class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n =nums.size();
        set<int>st(nums.begin(),nums.end());
        return (st.size()>1)?1:0;
        // return 0;/
    }
};