class Solution {
public:
    int find(vector<int>& parent, int i) {
        if (parent[i] == i) {
            return i;
        }

        return parent[i] = find(parent, parent[i]);
    }

    void Union(int x, int y, vector<int>& parent, vector<int>& rank) {
        int px = find(parent, x);
        int py = find(parent, y);
        if (px == py) {
            return;
        }
        if (rank[px] > rank[py]) {
            parent[py] = px;
        } else if (rank[py] > rank[px]) {
            parent[px] = py;
        } else {
            parent[px] = py;
            rank[py]++;
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> parent(n), rank(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    Union(i, j, parent, rank);
                }
            }
        }

        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(find(parent, i));
        }
        return st.size();
    }
};