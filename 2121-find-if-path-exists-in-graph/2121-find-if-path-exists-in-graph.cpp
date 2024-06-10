class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {

        unordered_map<int, vector<int>> m;
        // vector<>
        for (auto &x: edges) {
            vector<int>temp=x;
            // int u = x.first;
            // int v = x.second;
             int u = temp[0];
            int v = temp[1];
            m[u].push_back(v);
            m[v].push_back(u);
        }
        // vector<int>res;
        vector<bool> vis(n + 1, false);
        queue<int> q;
        vis[s] = true;
        q.push(s);
        while (!q.empty()) {
            int u = q.front() ;
            q.pop();
            // res.push_back(u);
            if(u==d){
                return true;
            }
            for(auto &v:m[u]){
                if(vis[v]==false){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return false;
    }
};