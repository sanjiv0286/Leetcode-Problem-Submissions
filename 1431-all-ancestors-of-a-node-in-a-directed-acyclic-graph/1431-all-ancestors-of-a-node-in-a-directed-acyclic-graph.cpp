//Approach-1 (Using DFS)
//T.C : O(n * (n+m)) , n = number of vertices and m = number of edges
//S.C : O(n+m)
class Solution {
public:

    void DFS(int ancestor, unordered_map<int, vector<int>>& adj, int currNode, vector<vector<int>>& result) {

        for(int &ngbr : adj[currNode]) {
            if(result[ngbr].empty() || result[ngbr].back() != ancestor) { //to avoid duplicate entry
                result[ngbr].push_back(ancestor);
                DFS(ancestor, adj, ngbr, result);
            }
        }

    }

    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> result(n);
        unordered_map<int, vector<int>> adj;

        for(vector<int>& vec : edges) {
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v); //u --> v
        }


        for(int i = 0; i < n; i++) {
            int ancestor = i;
            DFS(ancestor, adj, i, result);
        }

        return result;
    }
};


// //Approach-2 (Reversing the graph + Using DFS)
// //T.C : O(n * (n+m)) , n = number of vertices and m = number of edges
// //S.C : O(n+m)
// class Solution {
// public:

//     void DFS(int u, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
//         visited[u] = true;

//         for(int &v : adj[u]) {
//             if(visited[v] != true) {
//                 DFS(v, adj, visited);
//             }
//         }
//     }

//     vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//         vector<vector<int>> result;
//         unordered_map<int, vector<int>> adj;

//         for(vector<int>& vec : edges) { //O(E)
//             int u = vec[0];
//             int v = vec[1];

//             adj[v].push_back(u); //v --> u
//         }


//         for(int u = 0; u < n; u++) {
//             vector<int> ancestors;
//             vector<bool> visited(n, false);
//             DFS(u, adj, visited);

//             for(int i = 0; i < n; i++) {
//                 if(i == u) continue;
                
//                 if(visited[i] == true) {
//                     ancestors.push_back(i);
//                 }
//             }

//             result.push_back(ancestors);
//         }



        
//         return result;
//     }
// };


// //Approach-3 (Using Topological Sorting)
// //T.C : O(n + m + n^2 + nlogn) -> O(n+m) for building the graph and performing the topological sort, 
// //                     -> O(n^2) for processing each node and merging ancestor lists.
// //                     -> O(nlogn) for sorting the ancestor lists for each node.
// //S.C : O(n^2+m)
// class Solution {
// public:
//     vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//         vector<vector<int>> result(n);
//         unordered_map<int, vector<int>> adj; //S.C : O(V+E)
        
//         vector<int> indegree(n, 0);

//         for(vector<int>& vec : edges) { //O(E)
//             int u = vec[0];
//             int v = vec[1];

//             adj[u].push_back(v); //u --> v
//             indegree[v]++;
//         }


//         //TOPOLOGICAL SORTING
//         queue<int> que;
//         for(int i = 0; i < n; i++) {
//             if(indegree[i] == 0) {
//                 que.push(i);
//             }
//         }

//         vector<int> topoOrder;
//         while(!que.empty()) {
//             int curr = que.front();
//             que.pop();
//             topoOrder.push_back(curr);

//             for(int &v : adj[curr]) {
//                 indegree[v]--;
//                 if(indegree[v] == 0) {
//                     que.push(v);
//                 }
//             }
//         }

//         vector<unordered_set<int>> vec(n);

//         for(int &node : topoOrder) {
//             for(int &v : adj[node]) {
//                 vec[v].insert(node); //adding node ancestor
//                 vec[v].insert(vec[node].begin(), vec[node].end()); //adding ancestors of node
//             }
//         }

//         for(int i = 0; i < n; i++) {
//             result[i] = vector<int>(vec[i].begin(), vec[i].end());

//             sort(result[i].begin(), result[i].end());
//         }

        
//         return result;
//     }
// };