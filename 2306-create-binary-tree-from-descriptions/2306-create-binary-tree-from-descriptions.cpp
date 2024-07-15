// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
//         unordered_map<int, TreeNode*> nodeMap; // Map to store created nodes
//         unordered_set<int> children; // Set to keep track of all children
//         nodes

//         // Step 1: Create all nodes and mark the children
//         for (const auto& desc : descriptions) {
//             int parent = desc[0];
//             int child = desc[1];
//             int isLeft = desc[2];

//             if (nodeMap.find(parent) == nodeMap.end()) {
//                 nodeMap[parent] = new TreeNode(parent);
//             }
//             if (nodeMap.find(child) == nodeMap.end()) {
//                 nodeMap[child] = new TreeNode(child);
//             }

//             if (isLeft) {
//                 nodeMap[parent]->left = nodeMap[child];
//             } else {
//                 nodeMap[parent]->right = nodeMap[child];
//             }

//             children.insert(child);
//         }

//         // Step 2: Identify the root node (the one that is never a child)
//         TreeNode* root = nullptr;
//         for (const auto& desc : descriptions) {
//             if (children.find(desc[0]) == children.end()) {
//                 root = nodeMap[desc[0]];
//                 break;
//             }
//         }

//         return root;
//     }
// };

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        // Step 1: Use a vector of pairs to mark nodes
        unordered_map<int, pair<bool, TreeNode*>>
            nodes; // Pair of (isRoot, TreeNode)

        // Step 2: Traverse the descriptions to mark all parent nodes as
        // potential roots
        for (const auto& desc : descriptions) {
            int parent = desc[0];
            int child = desc[1];
            int isLeft = desc[2];

            if (nodes.find(parent) == nodes.end()) {
                nodes[parent] = {true, new TreeNode(parent)};
            }
            if (nodes.find(child) == nodes.end()) {
                nodes[child] = {true, new TreeNode(child)};
            }

            // Step 3: Mark all child nodes as non-root nodes
            nodes[child].first = false;

            // Step 4: Construct the tree
            if (isLeft) {
                nodes[parent].second->left = nodes[child].second;
            } else {
                nodes[parent].second->right = nodes[child].second;
            }
        }

        // Step 5: Identify the root node
        TreeNode* root = nullptr;
        for (const auto& node : nodes) {
            if (node.second.first) {
                root = node.second.second;
                break;
            }
        }

        return root;
    }
};
