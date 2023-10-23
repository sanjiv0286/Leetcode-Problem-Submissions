

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int len = graph.size();
        vector<int> colors(len, 0);
        
        for (int i = 0; i < len; i++) {
            if (colors[i] == 1 || colors[i] == -1) continue;
            queue<int> q;
            q.push(i);
            colors[i] = 1;
            
            while (!q.empty()) {
                int cur = q.front();
                q.pop();
                for (int next : graph[cur]) {
                    if (colors[next] == 0) {
                        colors[next] = -colors[cur];
                        q.push(next);
                    } 
                    
                    if (colors[next] == colors[cur]) return false;
                }
            }
        }
        
        return true;
    }
};

