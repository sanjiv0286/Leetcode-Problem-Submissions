class Solution {
public:
    void bfs( unordered_map<int,vector<int>>&adj,int s,  vector<bool>&vis){
        queue<int>q;
        q.push(s);
        vis[s]=true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            // cout<<u<<endl;
            for(auto &v:adj[u]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int  n = isConnected.size();
        unordered_map<int,vector<int>>adj;
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
            if(vis[i]==false){
                bfs(adj,i,vis);
                ct++;
            }
        }
        return ct;
    }
};