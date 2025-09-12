class Solution {
public:

    void dfs(int u,unordered_map<int,vector<int>>&adj,vector<bool>&vis){
           vis[u]=true;
           for(auto &v:adj[u]){
                if(!vis[v]){
                    dfs(v,adj,vis);
                }
           }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
        int n = isConnected.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int ct=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                ct++;
            }
        }
        return ct;

    }
};