class Solution {
public:
    bool DFSRec(int s, vector<bool>& visited, vector<bool>& dfsVisited,
                vector<vector<int>>& adj) {
        visited[s] = true;
        dfsVisited[s] = true;

        for (auto x : adj[s]) {
            if (!visited[x]) {
                if (DFSRec(x, visited, dfsVisited, adj)) {
                    return true;
                }
            } else if (dfsVisited[x]) {
                return true;
            }
        }

        dfsVisited[s] = false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        // Create the adjacency list
        for (auto& pair : prerequisites) {
            adj[pair[1]].push_back(pair[0]);
        }

        vector<bool> visited(numCourses, false), dfsVisited(numCourses, false);

        // Perform DFS for each course
        for (int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                if (DFSRec(i, visited, dfsVisited, adj)) {
                    return false;
                }
            }
        }

        return true;
    }
};
