class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
         // topological sorting 
         vector<int>indegree(n,0);
        for(auto &x:edges){
            indegree[x[1]]++;
        }
        int ct=0;
        int ans =-1;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                ct++;
                ans =i;

            }

        }
        return (ct>1) ? -1 : ans;
    }
};