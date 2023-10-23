// ************************** using BFS ***********************************

// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         int len = graph.size();
//         vector<int> colors(len, 0);
        
//         for (int i = 0; i < len; i++) {
//             if (colors[i] == 1 || colors[i] == -1) continue;
//             queue<int> q;
//             q.push(i);
//             colors[i] = 1;
            
//             while (!q.empty()) {
//                 int cur = q.front();
//                 q.pop();
//                 for (int next : graph[cur]) {
//                     if (colors[next] == 0) {
//                         colors[next] = -colors[cur];
//                         q.push(next);
//                     } 
                    
//                     if (colors[next] == colors[cur]) return false;
//                 }
//             }
//         }
        
//         return true;
//     }
// };

//******************************** Using DFS ************************************* 

class Solution {
public:

bool checkBipartite(vector<vector<int>>& adj,int curr,vector<int>&color,int currcolor){
    color[curr]=currcolor;
    for(auto &v: adj[curr]){
        if(color[v]==color[curr]){
            return false;

        }
        if(color[v]==-1){
            int colorOfAdj = 1-currcolor;
            if(checkBipartite(adj,v,color,colorOfAdj)==false){
                return false;
            }
        }
    }
    return true;
}

    bool isBipartite(vector<vector<int>>& adj) {
        int v  = adj.size();
        vector<int>color(v,-1);
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                if(checkBipartite(adj,i,color,1)==false){
                    return false;
                }

            }
        }
        return true;
        
    }
};