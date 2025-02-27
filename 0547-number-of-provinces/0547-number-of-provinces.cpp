class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int u, vector<bool>& vis) {
        vis[u] = true;
        int n = isConnected.size();
        for (int v = 0; v < n; v++) {
            if (vis[v] == false && isConnected[u][v] == 1) {
                dfs(isConnected, v, vis);
            }
        }
        return;
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        // vector<vector<int>> adj(n);
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (isConnected[i][j] == 1) {
        //             adj[i].push_back(j);
        //             adj[j].push_back(i);
        //         }
        //     }
        // }
        int ct = 0;
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (vis[i] == false) {
                dfs(isConnected, i, vis);
                ct++;
            }
        }
        return ct;
    }
};