class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1)
            return {0}; // Special case: only one node

        // Create adjacency list representation of the tree
        unordered_map<int, unordered_set<int>> adj_list;
        for (auto& edge : edges) {
            adj_list[edge[0]].insert(edge[1]);
            adj_list[edge[1]].insert(edge[0]);
        }

        // Initialize leaves list with nodes having only one neighbor
        vector<int> leaves;
        for (int i = 0; i < n; ++i) {
            if (adj_list[i].size() == 1) {
                leaves.push_back(i);
            }
        }

        // Iteratively remove leaves until there are 1 or 2 nodes left
        int remaining_nodes = n;
        while (remaining_nodes > 2) {
            remaining_nodes -= leaves.size();
            vector<int> new_leaves;
            for (int leaf : leaves) {
                int neighbor =
                    *(adj_list[leaf].begin()); // Get leaf's only neighbor
                adj_list[neighbor].erase(
                    leaf); // Remove edge between leaf and its neighbor
                if (adj_list[neighbor].size() == 1) {
                    new_leaves.push_back(neighbor);
                }
            }
            leaves = new_leaves;
        }

        // The remaining nodes are the root(s) of the MHT(s)
        return leaves;
    }
};