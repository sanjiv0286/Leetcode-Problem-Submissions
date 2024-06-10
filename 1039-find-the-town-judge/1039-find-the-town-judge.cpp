class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> ind_out_sum(n + 1, 0);
        for(auto &x:trust){
            ind_out_sum[x[0]]--;//outdegree
            ind_out_sum[x[1]]++;//indegree
        }
        for(int i=1;i<=n;i++){
            int x = ind_out_sum[i];
            if(x==n-1){
                return i;
            }

        }
        return -1;
    }
};