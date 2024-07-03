class Solution {
public:
    int bfs(vector<bool>& vis, int s, int d, vector<int> adj[]) {
        vis[s] = true;
        queue<int> q;
        q.push(s);
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            // cout << u << " ";
            if(u==d){
                return true;
            }
            for (auto& v : adj[u]) {
                if (vis[v] == false) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<int> adj[n];
        for (auto& x : edges) {
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n,false);

        return bfs(vis, source, destination, adj);
    }
};
