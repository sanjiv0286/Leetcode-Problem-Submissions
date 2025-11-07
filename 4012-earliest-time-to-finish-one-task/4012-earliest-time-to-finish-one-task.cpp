class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {

        vector<int>r;
        for(auto &x:tasks){
            int val = x[0] + x[1];
            r.push_back(val);
        }
        int ans = *min_element(r.begin(),r.end());

        return ans;
        
    }
};