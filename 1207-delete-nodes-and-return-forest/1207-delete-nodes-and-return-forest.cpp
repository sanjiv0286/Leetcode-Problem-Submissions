/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


   TreeNode* delete_help(TreeNode* root,unordered_set<int>&st, vector<TreeNode*>& res){
        if(root==nullptr){
            return nullptr;

        }
        root->left = delete_help(root->left,st,res);
        root->right = delete_help(root->right,st,res);

        if(st.find(root->val)!=st.end()){
            if(root->left!=nullptr){
                res.push_back(root->left);
            }
             if(root->right!=nullptr){
                res.push_back(root->right);
            }
            return nullptr;
        }
        else{
            return root ;
        }
    }


    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;

        unordered_set<int>st;

        for(auto &x:to_delete){
            st.insert(x);
        }

        delete_help(root,st,res);
        if(st.find(root->val)==st.end()){
            res.push_back(root);
        }

        return res;
        
    }
};